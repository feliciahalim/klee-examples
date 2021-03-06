/*
 * Copyright 2017 National University of Singapore
 *
 */
#ifdef LLBMC
#include <llbmc.h>
#else
#include <klee/klee.h>
#endif

int main(int argc, char **argv) {
  char b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10;
  int x = 0;

#ifdef LLBMC
  b0 = __llbmc_nondef_char();
  b1 = __llbmc_nondef_char();
  b2 = __llbmc_nondef_char();
  b3 = __llbmc_nondef_char();
  b4 = __llbmc_nondef_char();
  b5 = __llbmc_nondef_char();
  b6 = __llbmc_nondef_char();
  b7 = __llbmc_nondef_char();
  b8 = __llbmc_nondef_char();
  b9 = __llbmc_nondef_char();
#else
  klee_make_symbolic(&b0, sizeof(char), "b0");
  klee_make_symbolic(&b1, sizeof(char), "b1");
  klee_make_symbolic(&b2, sizeof(char), "b2");
  klee_make_symbolic(&b3, sizeof(char), "b3");
  klee_make_symbolic(&b4, sizeof(char), "b4");
  klee_make_symbolic(&b5, sizeof(char), "b5");
  klee_make_symbolic(&b6, sizeof(char), "b6");
  klee_make_symbolic(&b7, sizeof(char), "b7");
  klee_make_symbolic(&b8, sizeof(char), "b8");
  klee_make_symbolic(&b9, sizeof(char), "b9");
#endif

  if (b0 > 0)
    x += 7129;
  else
    x += 4769;
  if (b1 > 0)
    x += 8118;
  else
    x += 30026;
  if (b2 > 0)
    x += 18982;
  else
    x += 4199;
  if (b3 > 0)
    x += 13767;
  else
    x += 26145;
  if (b4 > 0)
    x += 6561;
  else
    x += 18850;
  if (b5 > 0)
    x += 30620;
  else
    x += 11209;
  if (b6 > 0)
    x += 5919;
  else
    x += 30603;
  if (b3 > 0)
    x += 22390;
  else
    x += 73321;
  if (b8 > 0)
    x += 7221;
  else
    x += 11945;
  if (b9 > 0)
    x += 11078;
  else
    x += 12413;
  printf("X:%d\n", x);
  klee_assert(x != 99000);

  /*  if(x>99)
      klee_assert(x > 99);
    else
      klee_assert(x < 99);*/

  return 0;
}
