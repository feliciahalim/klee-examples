/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */
#include <stdio.h>
#ifdef LLBMC
#include <llbmc.h>
#else
#include <klee/klee.h>
#endif

#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
/* compiler builtin:
   void *__builtin_alloca(unsigned int  ) ;  */
int BOUND1 = 20;
int BOUND2 = 20;
int kappa = 0;

void error(void) {

  {
    __VERIFIER_error();
    return;
  }
}
void immediate_notify(void);
int max_loop;
int clk;
int num;
int i;
int e;
int timer;
char data_0;
char data_1;
char read_data(int i___0) {
  char c;
  char __retres3;

  {
    if (i___0 == 0) {
      __retres3 = data_0;
      goto return_label;
    } else {
      if (i___0 == 1) {
        __retres3 = data_1;
        goto return_label;
      } else {
        error();
      }
    }
    __retres3 = c;
  return_label:
    return (__retres3);
  }
}
void write_data(int i___0, char c) {

  {
    if (i___0 == 0) {
      data_0 = c;
    } else {
      if (i___0 == 1) {
        data_1 = c;
      } else {
        error();
      }
    }
    return;
  }
}
int P_1_pc;
int P_1_st;
int P_1_i;
int P_1_ev;
void P_1(void) {

  {
    if (!(P_1_pc == 0)) {
      if (P_1_pc == 1) {
        goto P_1_WAIT_LOC;
      }
    }
  P_1_ENTRY_LOC:
    while (i < max_loop) {
      write_data(num, (char)'A');
      num = num + 1;
      P_1_pc = 1;
      P_1_st = 2;
      goto return_label;
    P_1_WAIT_LOC:;
    }
    P_1_st = 2;
  return_label:
    return;
  }
}
int is_P_1_triggered(void) {
  int __retres1;

  {
    if (P_1_pc == 1) {
      if (P_1_ev == 1) {
        __retres1 = 1;
        goto return_label;
      }
    }
    __retres1 = 0;
  return_label:
    return (__retres1);
  }
}
int P_2_pc;
int P_2_st;
int P_2_i;
int P_2_ev;
void P_2(void) {

  {
    if (!(P_2_pc == 0)) {
      if (P_2_pc == 1) {
        goto P_2_WAIT_LOC;
      }
    }
  P_2_ENTRY_LOC:
    while (i < max_loop) {
      write_data(num, (char)'B');
      num = num + 1;
      if (timer) {
        timer = 0;
        e = 1;
        immediate_notify();
        e = 2;
      }
      P_2_pc = 1;
      P_2_st = 2;
      goto return_label;
    P_2_WAIT_LOC:;
    }
    P_2_st = 2;
  return_label:
    return;
  }
}
int is_P_2_triggered(void) {
  int __retres1;

  {
    if (P_2_pc == 1) {
      if (P_2_ev == 1) {
        __retres1 = 1;
        goto return_label;
      }
    }
    __retres1 = 0;
  return_label:
    return (__retres1);
  }
}
int C_1_pc;
int C_1_st;
int C_1_i;
int C_1_ev;
int C_1_pr;
void C_1(void) {
  char c;

  {
    if (!(C_1_pc == 0)) {
      if (C_1_pc == 1) {
        goto C_1_WAIT_1_LOC;
      } else {
        if (C_1_pc == 2) {
          goto C_1_WAIT_2_LOC;
        }
      }
    }
  C_1_ENTRY_LOC:
    while (i < max_loop) {

      if (num == 0) {
        timer = 1;
        i = i + 1;
        C_1_pc = 1;
        C_1_st = 2;
        goto return_label;
      C_1_WAIT_1_LOC:;
      }
      num = num - 1;
      if (!(num >= 0)) {
        error();
      }
      c = read_data(num);
      i = i + 1;
      C_1_pc = 2;
      C_1_st = 2;
      goto return_label;
    C_1_WAIT_2_LOC:;
    }
    C_1_st = 2;
  return_label:
    return;
  }
}
int is_C_1_triggered(void) {
  int __retres1;

  {
    if (C_1_pc == 1) {
      if (e == 1) {
        __retres1 = 1;
        goto return_label;
      }
    }
    if (C_1_pc == 2) {
      if (C_1_ev == 1) {
        __retres1 = 1;
        goto return_label;
      }
    }
    __retres1 = 0;
  return_label:
    return (__retres1);
  }
}
void update_channels(void) {

  { return; }
}
void init_threads(void) {

  {
    if (P_1_i == 1) {
      P_1_st = 0;
    } else {
      P_1_st = 2;
    }
    if (P_2_i == 1) {
      P_2_st = 0;
    } else {
      P_2_st = 2;
    }
    if (C_1_i == 1) {
      C_1_st = 0;
    } else {
      C_1_st = 2;
    }
    return;
  }
}
int exists_runnable_thread(void) {
  int __retres1;

  {
    if (P_1_st == 0) {
      __retres1 = 1;
      goto return_label;
    } else {
      if (P_2_st == 0) {
        __retres1 = 1;
        goto return_label;
      } else {
        if (C_1_st == 0) {
          __retres1 = 1;
          goto return_label;
        }
      }
    }
    __retres1 = 0;
  return_label:
    return (__retres1);
  }
}

void eval(void) {
  int tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  int(*symb1)[4];
  unsigned int __lengthofsymb1;
  void *tmp___3;
  int FLAG;

  {
    __lengthofsymb1 = (unsigned int)BOUND1;
    tmp___3 = __builtin_alloca(sizeof(*symb1) * __lengthofsymb1);
    symb1 = (int(*)[4])tmp___3;
    klee_make_symbolic(symb1, (sizeof(int) * (unsigned int)BOUND1) * 4U,
                       "symb1");
    FLAG = 0;
    while (FLAG < BOUND1) {
      tmp___2 = exists_runnable_thread();
      if (!tmp___2) {
        goto while_3_break;
      }
      if (P_1_st == 0) {
        tmp = (*(symb1 + FLAG))[0];
        if (tmp) {
          P_1_st = 1;
          P_1();
        }
      }
      if (P_2_st == 0) {
        tmp___0 = (*(symb1 + FLAG))[1];
        if (tmp___0) {
          P_2_st = 1;
          P_2();
        }
      }
      if (C_1_st == 0) {
        tmp___1 = (*(symb1 + FLAG))[2];
        if (tmp___1) {
          C_1_st = 1;
          C_1();
        }
      }
      FLAG = FLAG + 1;
    }
  while_3_break:;
    return;
  }
}
void fire_delta_events(void) {

  { return; }
}
void reset_delta_events(void) {

  { return; }
}
void fire_time_events(void) {

  {
    C_1_ev = 1;
    if (clk == 1) {
      P_1_ev = 1;
      P_2_ev = 1;
      clk = 0;
    } else {
      clk = clk + 1;
    }
    return;
  }
}
void reset_time_events(void) {

  {
    if (P_1_ev == 1) {
      P_1_ev = 2;
    }
    if (P_2_ev == 1) {
      P_2_ev = 2;
    }
    if (C_1_ev == 1) {
      C_1_ev = 2;
    }
    return;
  }
}
void activate_threads(void) {
  int tmp;
  int tmp___0;
  int tmp___1;

  {
    tmp = is_P_1_triggered();
    if (tmp) {
      P_1_st = 0;
    }
    tmp___0 = is_P_2_triggered();
    if (tmp___0) {
      P_2_st = 0;
    }
    tmp___1 = is_C_1_triggered();
    if (tmp___1) {
      C_1_st = 0;
    }
    return;
  }
}
void immediate_notify(void) {

  {
    activate_threads();
    return;
  }
}
int stop_simulation(void) {
  int tmp;
  int __retres2;

  {
    tmp = exists_runnable_thread();
    if (tmp) {
      __retres2 = 0;
      goto return_label;
    }
    __retres2 = 1;
  return_label:
    return (__retres2);
  }
}
void start_simulation(void) {
  int kernel_st;
  int tmp;
  int tmp___0;
  int FLAG;

  {
    kernel_st = 0;
    update_channels();
    init_threads();
    fire_delta_events();
    activate_threads();
    reset_delta_events();
    FLAG = 0;
    while (FLAG < BOUND2) {
      kernel_st = 1;
      eval();
      kernel_st = 2;
      update_channels();
      kernel_st = 3;
      fire_delta_events();
      activate_threads();
      reset_delta_events();
      tmp = exists_runnable_thread();
      if (tmp == 0) {
        kernel_st = 4;
        fire_time_events();
        activate_threads();
        reset_time_events();
      }
      tmp___0 = stop_simulation();
      if (tmp___0) {
        goto while_4_break;
      }
      FLAG = FLAG + 1;
    }
  while_4_break:;
    return;
  }
}
void init_model(void) {

  {
    P_1_i = 1;
    P_2_i = 1;
    C_1_i = 1;
    return;
  }
}

int main(void) {
  int count;
  int __retres2;

  {
    num = 0;
    i = 0;
    clk = 0;
    max_loop = 8;
    timer = 0;
    P_1_pc = 0;
    P_2_pc = 0;
    C_1_pc = 0;
    count = 0;
    init_model();
    start_simulation();
    __retres2 = 0;
    /*  _SLICE(kappa);*/
    return (__retres2);
  }
}
