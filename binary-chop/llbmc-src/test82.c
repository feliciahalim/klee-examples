/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */
#include<stdio.h>
#define LLBMC 1
#ifdef LLBMC
#include <llbmc.h>
#else
#include <klee/klee.h>
#endif

#include <stdio.h> 
#include <assert.h>
#include <math.h>
#include <stdlib.h>
/* compiler builtin: 
   void *__builtin_alloca(unsigned int  ) ;  */
int BOUND1  =    4;
int BOUND2  =    4;
int BOUND3  =    4;
int kappa  =    0;
int wcet;

void error(void) 
{ 

  {
  
  return;
}
}
int main_in1_val  ;
int main_in1_val_t  ;
int main_in1_ev  ;
int main_in1_req_up  ;
int main_in2_val  ;
int main_in2_val_t  ;
int main_in2_ev  ;
int main_in2_req_up  ;
int main_diff_val  ;
int main_diff_val_t  ;
int main_diff_ev  ;
int main_diff_req_up  ;
int main_sum_val  ;
int main_sum_val_t  ;
int main_sum_ev  ;
int main_sum_req_up  ;
int main_pres_val  ;
int main_pres_val_t  ;
int main_pres_ev  ;
int main_pres_req_up  ;
int main_dbl_val  ;
int main_dbl_val_t  ;
int main_dbl_ev  ;
int main_dbl_req_up  ;
int main_zero_val  ;
int main_zero_val_t  ;
int main_zero_ev  ;
int main_zero_req_up  ;
int main_clk_val  ;
int main_clk_val_t  ;
int main_clk_ev  ;
int main_clk_req_up  ;
int main_clk_pos_edge  ;
int main_clk_neg_edge  ;
int N_generate_st  ;
int N_generate_i  ;
int S1_addsub_st  ;
int S1_addsub_i  ;
int S2_presdbl_st  ;
int S2_presdbl_i  ;
int S3_zero_st  ;
int S3_zero_i  ;
int D_z  ;
int D_print_st  ;
int D_print_i  ;
void N_generate(void) 
{ int a ;
  int b ;

  {
  main_in1_val_t = a;
  main_in1_req_up = 1;
  main_in2_val_t = b;
  main_in2_req_up = 1;
  return;
}
}
void S1_addsub(void) 
{ int a ;
  int b ;

  {
  a = main_in1_val;
  b = main_in2_val;
  main_sum_val_t = a + b;
  main_sum_req_up = 1;
  main_diff_val_t = a - b;
  main_diff_req_up = 1;
  return;
}
}
void S2_presdbl(void) 
{ int a ;
  int b ;
  int c ;
  int d ;

  {
  a = main_sum_val;
  b = main_diff_val;
  main_pres_val_t = a;
  main_pres_req_up = 1;
  c = a + b;
  d = a - b;
  main_dbl_val_t = c + d;
  main_dbl_req_up = 1;
  return;
}
}
void S3_zero(void) 
{ int a ;
  int b ;

  {
  a = main_pres_val;
  b = main_dbl_val;
  main_zero_val_t = b - (a + a);
  main_zero_req_up = 1;
  return;
}
}
void D_print(void) 
{ 

  {
  D_z = main_zero_val;
  return;
}
}

void eval(void) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int (*symb1)[5] ;
  unsigned int __lengthofsymb1 ;
  void *tmp___4 ;
  int FLAG ;

  {
  __lengthofsymb1 = (unsigned int )BOUND1;
  tmp___4 = __builtin_alloca(sizeof(*symb1) * __lengthofsymb1);
  symb1 = (int (*)[5])tmp___4;
  #ifdef LLBMC
  for (int i = 0; i < BOUND1; ++i) {
  for (int j = 0; j < 5; ++j) {
    symb1[i][j] = __llbmc_nondef_int();
  }
  }
  #else
  klee_make_symbolic(symb1, (sizeof(int ) * (unsigned int )BOUND1) * 5U, "symb1");
  #endif
  FLAG = 0;
  while (FLAG < BOUND1) {

    if (! (N_generate_st == 0)) {
      if (! (S1_addsub_st == 0)) {
        if (! (S2_presdbl_st == 0)) {
          if (! (S3_zero_st == 0)) {
            if (! (D_print_st == 0)) {
              goto while_0_break;
            }
          }
        }
      }
    }
    if (N_generate_st == 0) {
      tmp = (*(symb1 + FLAG))[0];
      if (tmp) {
        N_generate_st = 1;
        N_generate();
      }
    }
    if (S1_addsub_st == 0) {
      tmp___0 = (*(symb1 + FLAG))[1];
      if (tmp___0) {
        S1_addsub_st = 1;
        S1_addsub();
      }
    }
    if (S2_presdbl_st == 0) {
      tmp___1 = (*(symb1 + FLAG))[2];
      if (tmp___1) {
        S2_presdbl_st = 1;
        S2_presdbl();
      }
    }
    if (S3_zero_st == 0) {
      tmp___2 = (*(symb1 + FLAG))[3];
      if (tmp___2) {
        S3_zero_st = 1;
        S3_zero();
      }
    }
    if (D_print_st == 0) {
      tmp___3 = (*(symb1 + FLAG))[4];
      if (tmp___3) {
        D_print_st = 1;
        D_print();
      }
    }
    FLAG = FLAG + 1;
  }
  while_0_break: ;
  return;
}
}
void start_simulation(void) 
{ int kernel_st ;
  int FLAG2 ;

  {
  kernel_st = 0;
  if (main_in1_req_up == 1) {
    if (main_in1_val != main_in1_val_t) {
      main_in1_val = main_in1_val_t;
      main_in1_ev = 0;
    }
    main_in1_req_up = 0;
  }
  if (main_in2_req_up == 1) {
    if (main_in2_val != main_in2_val_t) {
      main_in2_val = main_in2_val_t;
      main_in2_ev = 0;
    }
    main_in2_req_up = 0;
  }
  if (main_sum_req_up == 1) {
    if (main_sum_val != main_sum_val_t) {
      main_sum_val = main_sum_val_t;
      main_sum_ev = 0;
    }
    main_sum_req_up = 0;
  }
  if (main_diff_req_up == 1) {
    if (main_diff_val != main_diff_val_t) {
      main_diff_val = main_diff_val_t;
      main_diff_ev = 0;
    }
    main_diff_req_up = 0;
  }
  if (main_pres_req_up == 1) {
    if (main_pres_val != main_pres_val_t) {
      main_pres_val = main_pres_val_t;
      main_pres_ev = 0;
    }
    main_pres_req_up = 0;
  }
  if (main_dbl_req_up == 1) {
    if (main_dbl_val != main_dbl_val_t) {
      main_dbl_val = main_dbl_val_t;
      main_dbl_ev = 0;
    }
    main_dbl_req_up = 0;
  }
  if (main_zero_req_up == 1) {
    if (main_zero_val != main_zero_val_t) {
      main_zero_val = main_zero_val_t;
      main_zero_ev = 0;
    }
    main_zero_req_up = 0;
  }
  if (main_clk_req_up == 1) {
    if (main_clk_val != main_clk_val_t) {
      main_clk_val = main_clk_val_t;
      main_clk_ev = 0;
      if (main_clk_val == 1) {
        main_clk_pos_edge = 0;
        main_clk_neg_edge = 2;
      } else {
        main_clk_neg_edge = 0;
        main_clk_pos_edge = 2;
      }
    }
    main_clk_req_up = 0;
  }
  if (N_generate_i == 1) {
    N_generate_st = 0;
  } else {
    N_generate_st = 2;
  }
  if (S1_addsub_i == 1) {
    S1_addsub_st = 0;
  } else {
    S1_addsub_st = 2;
  }
  if (S2_presdbl_i == 1) {
    S2_presdbl_st = 0;
  } else {
    S2_presdbl_st = 2;
  }
  if (S3_zero_i == 1) {
    S3_zero_st = 0;
  } else {
    S3_zero_st = 2;
  }
  if (D_print_i == 1) {
    D_print_st = 0;
  } else {
    D_print_st = 2;
  }
  if (main_in1_ev == 0) {
    main_in1_ev = 1;
  }
  if (main_in2_ev == 0) {
    main_in2_ev = 1;
  }
  if (main_sum_ev == 0) {
    main_sum_ev = 1;
  }
  if (main_diff_ev == 0) {
    main_diff_ev = 1;
  }
  if (main_pres_ev == 0) {
    main_pres_ev = 1;
  }
  if (main_dbl_ev == 0) {
    main_dbl_ev = 1;
  }
  if (main_zero_ev == 0) {
    main_zero_ev = 1;
  }
  if (main_clk_ev == 0) {
    main_clk_ev = 1;
  }
  if (main_clk_pos_edge == 0) {
    main_clk_pos_edge = 1;
  }
  if (main_clk_neg_edge == 0) {
    main_clk_neg_edge = 1;
  }
  if (main_clk_pos_edge == 1) {
    N_generate_st = 0;
  }
  if (main_clk_pos_edge == 1) {
    S1_addsub_st = 0;
  }
  if (main_clk_pos_edge == 1) {
    S2_presdbl_st = 0;
  }
  if (main_clk_pos_edge == 1) {
    S3_zero_st = 0;
  }
  if (main_clk_pos_edge == 1) {
    D_print_st = 0;
  }
  if (main_in1_ev == 1) {
    main_in1_ev = 2;
  }
  if (main_in2_ev == 1) {
    main_in2_ev = 2;
  }
  if (main_sum_ev == 1) {
    main_sum_ev = 2;
  }
  if (main_diff_ev == 1) {
    main_diff_ev = 2;
  }
  if (main_pres_ev == 1) {
    main_pres_ev = 2;
  }
  if (main_dbl_ev == 1) {
    main_dbl_ev = 2;
  }
  if (main_zero_ev == 1) {
    main_zero_ev = 2;
  }
  if (main_clk_ev == 1) {
    main_clk_ev = 2;
  }
  if (main_clk_pos_edge == 1) {
    main_clk_pos_edge = 2;
  }
  if (main_clk_neg_edge == 1) {
    main_clk_neg_edge = 2;
  }
  FLAG2 = 0;
  while (FLAG2 < BOUND2) {
    kernel_st = 1;
    eval();
    kernel_st = 2;
    if (main_in1_req_up == 1) {
      if (main_in1_val != main_in1_val_t) {
        main_in1_val = main_in1_val_t;
        main_in1_ev = 0;
      }
      main_in1_req_up = 0;
    }
    if (main_in2_req_up == 1) {
      if (main_in2_val != main_in2_val_t) {
        main_in2_val = main_in2_val_t;
        main_in2_ev = 0;
      }
      main_in2_req_up = 0;
    }
    if (main_sum_req_up == 1) {
      if (main_sum_val != main_sum_val_t) {
        main_sum_val = main_sum_val_t;
        main_sum_ev = 0;
      }
      main_sum_req_up = 0;
    }
    if (main_diff_req_up == 1) {
      if (main_diff_val != main_diff_val_t) {
        main_diff_val = main_diff_val_t;
        main_diff_ev = 0;
      }
      main_diff_req_up = 0;
    }
    if (main_pres_req_up == 1) {
      if (main_pres_val != main_pres_val_t) {
        main_pres_val = main_pres_val_t;
        main_pres_ev = 0;
      }
      main_pres_req_up = 0;
    }
    if (main_dbl_req_up == 1) {
      if (main_dbl_val != main_dbl_val_t) {
        main_dbl_val = main_dbl_val_t;
        main_dbl_ev = 0;
      }
      main_dbl_req_up = 0;
    }
    if (main_zero_req_up == 1) {
      if (main_zero_val != main_zero_val_t) {
        main_zero_val = main_zero_val_t;
        main_zero_ev = 0;
      }
      main_zero_req_up = 0;
    }
    if (main_clk_req_up == 1) {
      if (main_clk_val != main_clk_val_t) {
        main_clk_val = main_clk_val_t;
        main_clk_ev = 0;
        if (main_clk_val == 1) {
          main_clk_pos_edge = 0;
          main_clk_neg_edge = 2;
        } else {
          main_clk_neg_edge = 0;
          main_clk_pos_edge = 2;
        }
      }
      main_clk_req_up = 0;
    }
    kernel_st = 3;
    if (main_in1_ev == 0) {
      main_in1_ev = 1;
    }
    if (main_in2_ev == 0) {
      main_in2_ev = 1;
    }
    if (main_sum_ev == 0) {
      main_sum_ev = 1;
    }
    if (main_diff_ev == 0) {
      main_diff_ev = 1;
    }
    if (main_pres_ev == 0) {
      main_pres_ev = 1;
    }
    if (main_dbl_ev == 0) {
      main_dbl_ev = 1;
    }
    if (main_zero_ev == 0) {
      main_zero_ev = 1;
    }
    if (main_clk_ev == 0) {
      main_clk_ev = 1;
    }
    if (main_clk_pos_edge == 0) {
      main_clk_pos_edge = 1;
    }
    if (main_clk_neg_edge == 0) {
      main_clk_neg_edge = 1;
    }
    if (main_clk_pos_edge == 1) {
      N_generate_st = 0;
    }
    if (main_clk_pos_edge == 1) {
      S1_addsub_st = 0;
    }
    if (main_clk_pos_edge == 1) {
      S2_presdbl_st = 0;
    }
    if (main_clk_pos_edge == 1) {
      S3_zero_st = 0;
    }
    if (main_clk_pos_edge == 1) {
      D_print_st = 0;
    }
    if (main_in1_ev == 1) {
      main_in1_ev = 2;
    }
    if (main_in2_ev == 1) {
      main_in2_ev = 2;
    }
    if (main_sum_ev == 1) {
      main_sum_ev = 2;
    }
    if (main_diff_ev == 1) {
      main_diff_ev = 2;
    }
    if (main_pres_ev == 1) {
      main_pres_ev = 2;
    }
    if (main_dbl_ev == 1) {
      main_dbl_ev = 2;
    }
    if (main_zero_ev == 1) {
      main_zero_ev = 2;
    }
    if (main_clk_ev == 1) {
      main_clk_ev = 2;
    }
    if (main_clk_pos_edge == 1) {
      main_clk_pos_edge = 2;
    }
    if (main_clk_neg_edge == 1) {
      main_clk_neg_edge = 2;
    }
    if (! (N_generate_st == 0)) {
      if (! (S1_addsub_st == 0)) {
        if (! (S2_presdbl_st == 0)) {
          if (! (S3_zero_st == 0)) {
            if (! (D_print_st == 0)) {
              goto while_1_break;
            }
          }
        }
      }
    }
    FLAG2 = FLAG2 + 1;
  }
  while_1_break: ;
  return;
}
}

int main(void) 
{ wcet = 0;
int count ;
  int __retres2 ;
  int FLAG3 ;

  {
  main_in1_ev = 2;
  main_in1_req_up = 0;
  main_in2_ev = 2;
  main_in2_req_up = 0;
  main_diff_ev = 2;
  main_diff_req_up = 0;
  main_sum_ev = 2;
  main_sum_req_up = 0;
  main_pres_ev = 2;
  main_pres_req_up = 0;
  main_dbl_ev = 2;
  main_dbl_req_up = 0;
  main_zero_ev = 2;
  main_zero_req_up = 0;
  main_clk_val = 0;
  main_clk_ev = 2;
  main_clk_req_up = 0;
  main_clk_pos_edge = 2;
  main_clk_neg_edge = 2;
  count = 0;
  N_generate_i = 0;
  S1_addsub_i = 0;
  S2_presdbl_i = 0;
  S3_zero_i = 0;
  D_print_i = 0;
  start_simulation();
  FLAG3 = 0;
  while (FLAG3 < BOUND3) {
    main_clk_val_t = 1;
    main_clk_req_up = 1;
    start_simulation();
    count = count + 1;
    if (count == 5) {
      if (D_z == 0) {
        error();
      }
      count = 0;
    }
    main_clk_val_t = 0;
    main_clk_req_up = 1;
    start_simulation();
    FLAG3 = FLAG3 + 1;
  }
  __retres2 = 0;
  tracerx_check();
  return (__retres2);
}
}
