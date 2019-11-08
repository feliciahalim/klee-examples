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
int BOUND1  =    3;
int BOUND2  =    3;
int BOUND3  =    3;
int BOUND4  =    3;
int BOUND5  =    3;
int BOUND6  =    3;
int kappa  =    0;
int wcet;

void error(void) 
{ 

  {
  return;
}
}
int c  ;
int c_t  ;
int c_req_up  ;
int p_in  ;
int p_out  ;
int wl_st  ;
int c1_st  ;
int c2_st  ;
int wb_st  ;
int r_st  ;
int wl_i  ;
int c1_i  ;
int c2_i  ;
int wb_i  ;
int r_i  ;
int wl_pc  ;
int c1_pc  ;
int c2_pc  ;
int wb_pc  ;
int e_e  ;
int e_f  ;
int e_g  ;
int e_c  ;
int e_p_in  ;
int e_wl  ;
void write_loop(void) ;
void compute1(void) ;
void compute2(void) ;
void write_back(void) ;
void read(void) ;
int d  ;
int data  ;
int processed  ;
static int t_b  ;
void write_loop(void) 
{ int t ;
  int FLAG2 ;

  {
  if (! (wl_pc == 0)) {
    if (wl_pc == 2) {
      goto WL_WAIT_2_LOC;
    } else {
      if (wl_pc == 1) {
        goto WL_WAIT_1_LOC;
      }
    }
  }
  WL_ENTRY_LOC: 
  wl_st = 2;
  wl_pc = 1;
  e_wl = 0;
  goto return_label;
  WL_WAIT_1_LOC: 
  FLAG2 = 0;
  while (FLAG2 < BOUND2) {
    t = d;
    data = d;
    processed = 0;
    e_f = 1;
    if (c1_pc == 1) {
      if (e_f == 1) {
        c1_st = 0;
      }
    }
    if (c2_pc == 1) {
      if (e_f == 1) {
        c2_st = 0;
      }
    }
    e_f = 2;
    wl_st = 2;
    wl_pc = 2;
    t_b = t;
    goto return_label;
    WL_WAIT_2_LOC: 
    t = t_b;
    if (! (d == t + 1)) {
      if (! (d == t + 2)) {
        error();
      }
    }
    FLAG2 = FLAG2 + 1;
  }

  return_label: 
  return;
}
}
void compute1(void) 
{ int FLAG3 ;

  {
  if (! (c1_pc == 0)) {
    if (c1_pc == 1) {
      goto C1_WAIT_LOC;
    }
  }
  C1_ENTRY_LOC: 
  FLAG3 = 0;
  while (FLAG3 < BOUND3) {
    c1_st = 2;
    c1_pc = 1;
    goto return_label;
    C1_WAIT_LOC: 
    if (! processed) {
      data = data + 1;
      e_g = 1;
      if (wb_pc == 1) {
        if (e_g == 1) {
          wb_st = 0;
        }
      }
      e_g = 2;
    }
    FLAG3 = FLAG3 + 1;
  }

  return_label: 
  return;
}
}
void compute2(void) 
{ int FLAG4 ;

  {
  if (! (c2_pc == 0)) {
    if (c2_pc == 1) {
      goto C2_WAIT_LOC;
    }
  }
  C2_ENTRY_LOC: 
  FLAG4 = 0;
  while (FLAG4 < BOUND4) {
    c2_st = 2;
    c2_pc = 1;
    goto return_label;
    C2_WAIT_LOC: 
    if (! processed) {
      data = data + 1;
      e_g = 1;
      if (wb_pc == 1) {
        if (e_g == 1) {
          wb_st = 0;
        }
      }
      e_g = 2;
    }
    FLAG4 = FLAG4 + 1;
  }

  return_label: 
  return;
}
}
void write_back(void) 
{ int FLAG5 ;

  {
  if (! (wb_pc == 0)) {
    if (wb_pc == 1) {
      goto WB_WAIT_LOC;
    }
  }
  WB_ENTRY_LOC: 
  FLAG5 = 0;
  while (FLAG5 < BOUND5) {
    wb_st = 2;
    wb_pc = 1;
    goto return_label;
    WB_WAIT_LOC: 
    c_t = data;
    c_req_up = 1;
    processed = 1;
    FLAG5 = FLAG5 + 1;
  }

  return_label: 
  return;
}
}
void read(void) 
{ 

  {
  d = c;
  e_e = 1;
  if (wl_pc == 1) {
    if (e_wl == 1) {
      wl_st = 0;
    } else {
      goto _L;
    }
  } else {
    _L: 
    if (wl_pc == 2) {
      if (e_e == 1) {
        wl_st = 0;
      }
    }
  }
  e_e = 2;
  r_st = 2;
  return;
}
}

void eval(void) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int (*symb1)[6] ;
  unsigned int __lengthofsymb1 ;
  void *tmp___4 ;
  int FLAG1 ;

  {
  __lengthofsymb1 = (unsigned int )BOUND1;
  tmp___4 = __builtin_alloca(sizeof(*symb1) * __lengthofsymb1);
  symb1 = (int (*)[6])tmp___4;
     #ifdef LLBMC
  for (int i = 0; i < BOUND1; ++i) {
  for (int j = 0; j < 6; ++j) {
    symb1[i][j] = __llbmc_nondef_int();
  }
  }
  #else
  klee_make_symbolic(symb1, (sizeof(int ) * (unsigned int )BOUND1) * 6U, "symb1");
  #endif
  FLAG1 = 0;
  while (FLAG1 < BOUND1) {

    if (! (wl_st == 0)) {
      if (! (c1_st == 0)) {
        if (! (c2_st == 0)) {
          if (! (wb_st == 0)) {
            if (! (r_st == 0)) {
              goto while_4_break;
            }
          }
        }
      }
    }
    if (wl_st == 0) {
      tmp = (*(symb1 + FLAG1))[0];
      if (tmp) {
        wl_st = 1;
        write_loop();
      }
    }
    if (c1_st == 0) {
      tmp___0 = (*(symb1 + FLAG1))[1];
      if (tmp___0) {
        c1_st = 1;
        compute1();
      }
    }
    if (c2_st == 0) {
      tmp___1 = (*(symb1 + FLAG1))[2];
      if (tmp___1) {
        c2_st = 1;
        compute2();
      }
    }
    if (wb_st == 0) {
      tmp___2 = (*(symb1 + FLAG1))[3];
      if (tmp___2) {
        wb_st = 1;
        write_back();
      }
    }
    if (r_st == 0) {
      tmp___3 = (*(symb1 + FLAG1))[4];
      if (tmp___3) {
        r_st = 1;
        read();
      }
    }
    FLAG1 = FLAG1 + 1;
  }
  while_4_break: ;
  return;
}
}
void start_simulation(void) 
{ int kernel_st ;
  int FLAG6 ;

  {
  kernel_st = 0;
  if (c_req_up == 1) {
    if (c != c_t) {
      c = c_t;
      e_c = 0;
    }
    c_req_up = 0;
  }
  if (wl_i == 1) {
    wl_st = 0;
  } else {
    wl_st = 2;
  }
  if (c1_i == 1) {
    c1_st = 0;
  } else {
    c1_st = 2;
  }
  if (c2_i == 1) {
    c2_st = 0;
  } else {
    c2_st = 2;
  }
  if (wb_i == 1) {
    wb_st = 0;
  } else {
    wb_st = 2;
  }
  if (r_i == 1) {
    r_st = 0;
  } else {
    r_st = 2;
  }
  if (e_f == 0) {
    e_f = 1;
  }
  if (e_g == 0) {
    e_g = 1;
  }
  if (e_e == 0) {
    e_e = 1;
  }
  if (e_c == 0) {
    e_c = 1;
  }
  if (e_wl == 0) {
    e_wl = 1;
  }
  if (wl_pc == 1) {
    if (e_wl == 1) {
      wl_st = 0;
    } else {
      goto _L;
    }
  } else {
    _L: 
    if (wl_pc == 2) {
      if (e_e == 1) {
        wl_st = 0;
      }
    }
  }
  if (c1_pc == 1) {
    if (e_f == 1) {
      c1_st = 0;
    }
  }
  if (c2_pc == 1) {
    if (e_f == 1) {
      c2_st = 0;
    }
  }
  if (wb_pc == 1) {
    if (e_g == 1) {
      wb_st = 0;
    }
  }
  if (e_c == 1) {
    r_st = 0;
  }
  if (e_e == 1) {
    e_e = 2;
  }
  if (e_f == 1) {
    e_f = 2;
  }
  if (e_g == 1) {
    e_g = 2;
  }
  if (e_c == 1) {
    e_c = 2;
  }
  if (e_wl == 1) {
    e_wl = 2;
  }
  FLAG6 = 0;
  while (FLAG6 < BOUND6) {
    kernel_st = 1;
    eval();
    kernel_st = 2;
    if (c_req_up == 1) {
      if (c != c_t) {
        c = c_t;
        e_c = 0;
      }
      c_req_up = 0;
    }
    kernel_st = 3;
    if (e_f == 0) {
      e_f = 1;
    }
    if (e_g == 0) {
      e_g = 1;
    }
    if (e_e == 0) {
      e_e = 1;
    }
    if (e_c == 0) {
      e_c = 1;
    }
    if (e_wl == 0) {
      e_wl = 1;
    }
    if (wl_pc == 1) {
      if (e_wl == 1) {
        wl_st = 0;
      } else {
        goto _L___0;
      }
    } else {
      _L___0: 
      if (wl_pc == 2) {
        if (e_e == 1) {
          wl_st = 0;
        }
      }
    }
    if (c1_pc == 1) {
      if (e_f == 1) {
        c1_st = 0;
      }
    }
    if (c2_pc == 1) {
      if (e_f == 1) {
        c2_st = 0;
      }
    }
    if (wb_pc == 1) {
      if (e_g == 1) {
        wb_st = 0;
      }
    }
    if (e_c == 1) {
      r_st = 0;
    }
    if (e_e == 1) {
      e_e = 2;
    }
    if (e_f == 1) {
      e_f = 2;
    }
    if (e_g == 1) {
      e_g = 2;
    }
    if (e_c == 1) {
      e_c = 2;
    }
    if (e_wl == 1) {
      e_wl = 2;
    }
    if (! (wl_st == 0)) {
      if (! (c1_st == 0)) {
        if (! (c2_st == 0)) {
          if (! (wb_st == 0)) {
            if (! (r_st == 0)) {
              goto while_5_break;
            }
          }
        }
      }
    }
    FLAG6 = FLAG6 + 1;
  }
  while_5_break: ;
  return;
}
}

int main(void) 
{ 
wcet = 0;
int __retres1 ;

  {
  e_wl = 2;
  e_c = e_wl;
  e_g = e_c;
  e_f = e_g;
  e_e = e_f;
  wl_pc = 0;
  c1_pc = 0;
  c2_pc = 0;
  wb_pc = 0;
  wb_i = 1;
  c2_i = wb_i;
  c1_i = c2_i;
  wl_i = c1_i;
  r_i = 0;
  c_req_up = 0;
  d = 0;
  c = 0;
  start_simulation();
  __retres1 = 0;
  tracerx_check();
  return (__retres1);
}
}
