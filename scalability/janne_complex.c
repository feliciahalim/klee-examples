/* Obtained from http://www.mrtc.mdh.se/projects/wcet/benchmarks.html,
 * with KLEE harnessing added */

/*----------------------------------------------------------------------
 *  WCET Benchmark created by Andreas Ermedahl, Uppsala university, 
 *  May 2000.  
 *
 *  The purpose of this benchmark is to have two loop where the inner 
 *  loops max number of iterations depends on the outer loops current 
 *  iterations.  The results corresponds to something Jannes flow-analysis 
 *  should produce.
 *
 * The example appeard for the first time in: 
 * 
 *  @InProceedings{Ermedahl:Annotations,
 * author =       "A. Ermedahl and J. Gustafsson",
 * title =        "Deriving Annotations for Tight Calculation of Execution Time",
 * year =         1997,
 * month =        aug,
 * booktitle =    EUROPAR97,
 * publisher =    "Springer Verlag",
 * pages =        "1298-1307"
 * }
 *
 * The result of Jannes tool is something like:
 *   outer loop:       1   2   3   4   5   6   7   8   9   10   11 
 *   inner loop max:   5   9   8   7   4   2   1   1   1   1    1 
 *
 *----------------------------------------------------------------------*/
#ifdef LLBMC
#include <llbmc.h>
#else
#include <klee/klee.h>
#endif

int complex(int a, int b)
{
  while(a < 30)
    {
      while(b < a)
	{ 
	  if(b > 5) 
	    b = b * 3; 
	  else
	    b = b + 2;
	  if(b >= 10 && b <= 12) 
	    a = a + 10;
	  else 
	    a = a + 1;
	}
      a = a + 2; 
      b = b - 10; 
    }
  return 1;
}

int main()
{   
  /* a = [1..30] b = [1..30] */ 
  int a = 1, b = 1, answer = 0;
  /* if(answer)
     {a = 1; b = 1;}
     else
     {a = 30; b = 30;} */

#ifdef LLBMC
  a = __llbmc_nondef_int();
  b = __llbmc_nondef_int();
  answer = __llbmc_nondef_int();

  __llbmc_assume(a >= 1);
  __llbmc_assume(a <= 30);
  __llbmc_assume(b >= 1);
  __llbmc_assume(b <= 30);
#else
  klee_make_symbolic(&a, sizeof(a), "a");
  klee_make_symbolic(&b, sizeof(b), "b");
  klee_make_symbolic(&answer, sizeof(answer), "answer");

  klee_assume(a >= 1);
  klee_assume(a <= 30);
  klee_assume(b >= 1);
  klee_assume(b <= 30);
#endif

  answer = complex(a, b);
  return answer;
}



