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
  TK_NOTYPE = 256, TK_EQ = 1, TK_NUM = 2

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"-", '-'},
  {"\\*", '*'},
  {"/", '/'},
  {"==", TK_EQ},        // equal
  {"[0-9]+", TK_NUM},
//  {"", },
  {"\\(", '('},
  {"\\)", ')'},
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

static bool make_token(char *e) {
  int position = 0;
  int n = 0;
  int i;
  regmatch_t pmatch;

  Token tokens[1000];

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

	/*if (rules[i].token_type != TK_NOTYPE) {
	  tokens[n].type = rules[i].token_type;
	  //assert(strlen(e[position]) <= 32);
	  tokens[n].str[0] = e[position];
	  printf("%d: %s\n", tokens[n].type, tokens[n].str);
	  n++;
	}

        position += substr_len;*/

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
          default: if (rules[i].token_type != TK_NOTYPE) {
          	      tokens[n].type = rules[i].token_type;
          	      //assert(strlen(e[position]) <= 32);
          	      tokens[n].str[0] = e[position];
          	      printf("%d: %s\n", tokens[n].type, tokens[n].str);
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
    for (; p < q; p++) {
      if (tokens[p].type == '(') state++;
      else if (tokens[p].type == ')') state--;
      else if (state < 0) assert(0);
      else if(state == 0 && p != q) return false;
    }
  }
  return true;
}

static int priority(char op) {
    switch (op) {
        case '+': case '-': return 1;
        case '*': case '/': return 2;
        default: return 0;
    }
}

static int m_op(int p, int q) {
    int pos = -1;
    int op_priority = 2;
    int bracket = 0;

    for (; p != q; p++) {
        if (tokens[p].type == '(') bracket++;
        else if (tokens[p].type == ')') bracket--;
        else if (bracket == 0) {
	    char op = tokens[p].str[0];
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
    return atoi((tokens[p].str));
  }

  else if (check_parentheses(p, q) == true) {
    return eval(p + 1, q - 1);
  }
  
  else {
    op = m_op(p, q);
    val1 = eval(p, op - 1);
    val2 = eval(op + 1, q);

    switch (tokens[op].type) {
      case '+': return val1 + val2;
      case '-': return val1 - val2;
      case '*': return val1 * val2;
      case '/': return val1 / val2;
      default: assert(0);
    }
  }
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  *success = true;
  uint32_t str_len = strlen(e);
  for (int k = 0; k < str_len; k++) printf("the tokens are %s", tokens[k].str);
  return (eval(0, str_len));
  /* TODO: Insert codes to evaluate the expression. */
}

