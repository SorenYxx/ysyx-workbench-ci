/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256,
  TK_EQ = 257, 
  TK_NEQ = 258, 
  TK_NUM = 259, 
  TK_AND = 260, 
  TK_HEX = 261,
  TK_REG = 262,
  DEREF = 263,
  

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {"0x[0-9a-hA-H]{8}", TK_HEX},
  {"^\\$[a-z]\\d+", TK_REG},
  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"-", '-'},
  {"\\*", '*'},
  {"/", '/'},
  {"==", TK_EQ},        // equal
  {"!=", TK_NEQ},
  {"[0-9]+", TK_NUM},
  {"\\(", '('},
  {"\\)", ')'},
  {"&&",TK_AND},

};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg [128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;
static int n = 0;

static bool make_token(char *e) {
  int position = 0;
  //int n = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        switch (rules[i].token_type) {
          default: if (rules[i].token_type != TK_NOTYPE) {
          	      tokens[n].type = rules[i].token_type;
          	      assert(strlen(substr_start) <= 32);

		      char s[32];
		      sprintf(s, "%.*s", substr_len, substr_start);
		      strcpy(tokens[n].str, s);
          	      printf("tokens[%d].type: %d\ntokens[%d].str: %s\n", n, tokens[n].type, n, tokens[n].str);
          	      n++;
        	    }

        position += substr_len;

        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}


static bool check_parentheses(int p, int q) {
  int state = 0;
  if (tokens[p].type == 40 && tokens[q].type == 41) {
    printf("check in match...\n");
    p++;
    q--;
    for (; p <= q; p++) {
      if (tokens[p].type == '(') state++;
      else if (tokens[p].type == ')') state--;
    }
    if (state == 0) return true;
    else {
      printf("Error: The parentheses do not match!\n");
      assert(0);
    }
  }
  return false;
}

static int priority(int op) {
    switch (op) {
	case TK_AND: return 1;
	case TK_EQ: case TK_NEQ: return 2;
        case '+': case '-': return 3;
        case '*': case '/': return 4;
        default: return 0;
    }
}

static int m_op(int p, int q) {
    int pos = -1;
    int op_priority = 4;
    int bracket = 0;

    for (; p != q; p++) {
        if (tokens[p].type == '(') bracket++;
        else if (tokens[p].type == ')') bracket--;
        else if (bracket == 0) {
	    int op = tokens[p].type;
            int i = priority(op);
            if (i > 0 && i <= op_priority) {
                op_priority = i;
                pos = p;
            }
        }
    }

    return pos;
}

uint32_t eval(int p, int q) {
  uint32_t val1;
  uint32_t val2;
  int op;

  if (p > q) return 0;

  else if (p == q) {
    uint32_t num = atoi(tokens[p].str);
    printf("The num in tokens is: %d\n", num);
    return (num);
  }

  else if (check_parentheses(p, q) == true) {
    printf("..good match\n");
    return eval(p + 1, q - 1);
  }
  
  else {
  op = m_op(p, q);
    val1 = eval(p, op - 1);
    val2 = eval(op + 1, q);
    printf("Last..op: %s val1: %d val2: %d\n", tokens[op].str, val1, val2);

    switch (tokens[op].type) {
      case '+': return val1 + val2;
      case '-': return val1 - val2;
      case '*': return val1 * val2;
      case '/': return val1 / val2;
      case TK_AND: return val1 && val2;
      case TK_EQ: return val1 == val2;
      case TK_NEQ: return val1 != val2;
      default: assert(0);
    }
  }
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  for (int i = 0; i < nr_token; i ++) {
    if (tokens[i].type == '*' && (i == 0 || tokens[i - 1].type == '(') ) {
      tokens[i].type = DEREF;
    }
  }

  *success = true;
  uint32_t str_len = n;
  printf("the len are: %d\n", str_len);
  
  for (int k = 0; k <= n; k ++) {
    int thelen = strlen(tokens[k].str);
    char reg0[32];
    switch (tokens[k].type) {
      case TK_HEX:if (true) {
                    uint32_t num;
                    sscanf(tokens[k].str, "%x", &num);
                    sprintf(tokens[k].str, "%u", num);
                    printf("----tokens[%d]: %s\n", k, tokens[k].str);
                  }

      case TK_REG:if (true) {
                    for (int b = 0; b < thelen; b ++) reg0[b] = tokens[k].str[b + 1];
                    bool good;
                    sprintf(tokens[k].str, "%u", isa_reg_str2val(reg0, &good));
                    assert(good);
                  }
      default: assert(1);
    }

  }
 
  printf("HEX: %s", tokens[1].str); 
  int R = eval(0, str_len - 1);
  
  n = 0;
  return (R);
}
