#define LLBMC 1
#ifdef LLBMC
#include <llbmc.h>
#else
#include <klee/klee.h>
#endif
int wcet;

int main() {

  wcet = 0;
  int i, j, a[25], tmp;
  int b1, b2, b3, b4, b5, b6, b7, b8;


  int v1, v2;

  
  #ifdef LLBMC
  for (int i = 0; i < 25; ++i) {
    a[i] = __llbmc_nondef_int();
  }
  b1 = __llbmc_nondef_int();
  b2 = __llbmc_nondef_int();
  b3 = __llbmc_nondef_int();
  b4 = __llbmc_nondef_int();
  b5 = __llbmc_nondef_int();
  b6 = __llbmc_nondef_int();
  b7 = __llbmc_nondef_int();
  b8 = __llbmc_nondef_int();
  v1 = __llbmc_nondef_int();
  v2 = __llbmc_nondef_int();  
  #else
  klee_make_symbolic(a, 25 * sizeof(int), "a");
  klee_make_symbolic(&b1, sizeof(int), "b1");
  klee_make_symbolic(&b2, sizeof(int), "b2");
  klee_make_symbolic(&b3, sizeof(int), "b3");
  klee_make_symbolic(&b4, sizeof(int), "b4");
  klee_make_symbolic(&b5, sizeof(int), "b5");
  klee_make_symbolic(&b6, sizeof(int), "b6");
  klee_make_symbolic(&b7, sizeof(int), "b7");
  klee_make_symbolic(&b8, sizeof(int), "b8");
  klee_make_symbolic(&v1, sizeof(int), "v1");
  klee_make_symbolic(&v2, sizeof(int), "v2");
   #endif
  if (b1 > 0)
    a[0] = v1;
  else
    a[0] = v2;
  if (b2 > 0)
    a[1] = v1;
  else
    a[1] = v2;
  if (b3 > 0)
    a[2] = v1;
  else
    a[2] = v2;
  if (b4 > 0)
    a[3] = v1;
  else
    a[3] = v2;
  if (b5 > 0)
    a[4] = v1;
  else
    a[4] = v2;
  if (b6 > 0)
    a[5] = v1;
  else
    a[5] = v2;
  if (b7 > 0)
    a[6] = v1;
  else
    a[6] = v2;
  if (b1 > 0)
    a[7] = v1;
  else
    a[7] = v2;

  //    a[0] = 0;
  //    a[1] = 1;
  //    a[2] = 2;
  //    a[3] = 3;
  //    a[4] = 4;
  //    a[5] = 5;
  //    a[6] = 6;
  //    a[7] = 7;
  //  i = 0;
  //  while (i < 25-1) {
  //    klee_assume(2 <= a[i] <=4);
  //  }

  i = 0;
  while (i < 8 - 1) {
    j = 0;
    while (j < 8 - 1 - i) {

      if (a[j] > a[j + 1]) {

        tmp = a[j + 1];

        a[j + 1] = a[j];

        a[j] = tmp;
      }
      j++;
    }
    i++;
  }
  tracerx_check();
}
