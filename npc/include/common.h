#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <assert.h>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <sys/time.h>

#define ANSI_FG_BLUE  "\e[1;34m"
#define ANSI_NONE     "\e[0m"

#define Log(format, ...) \
    printf(ANSI_FG_BLUE "[npc] " format ANSI_NONE "\n", ## __VA_ARGS__)

#define Assert(cond, format, ...) \
  do { \
    if (!(cond)) { \
      fflush(stdout); \
      fprintf(stderr, "\33[1;31m" format "\33[0m\n", ## __VA_ARGS__); \
      extern void sim_exit(); \
      sim_exit(); \
      assert(cond); \
    } \
  } while (0)

#endif
