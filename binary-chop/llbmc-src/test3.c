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
int wcet;
 
int BOUND  =    10;
int m_Protocol  =    1;
int m_msg_2  =    2;
int m_recv_ack_2  =    3;
int m_msg_1_1  =    4;
int m_msg_1_2  =    5;
int m_recv_ack_1_1  =    6;
int m_recv_ack_1_2  =    7;
int kappa  =    0;

int main(void) 
{ wcet = 0;
  int dummy ;
  int q ;
  int FLAG ;
  int i ;
  int method_id ;
  int this_expect ;
  int this_buffer_empty ;
  int (*symb)[32] ;
  unsigned int __lengthofsymb ;
  void *tmp ;
  int P1 ;
  int P2 ;
  int P3 ;
  int P4 ;
  int P5 ;
  int P6 ;
  int P7 ;
  int P8 ;
  int P9 ;
  int FLAG___0 ;

  {
  dummy = 1;
  q = 0;
  FLAG = 0;
  i = 0;
  this_expect = 0;
  this_buffer_empty = 0;
  __lengthofsymb = (unsigned int )BOUND;
  tmp = __builtin_alloca(sizeof(*symb) * __lengthofsymb);
  symb = (int (*)[32])tmp;
  #ifdef LLBMC
  for (int i = 0; i < BOUND; ++i) {
  for (int j = 0; j < 32; ++j) {
    symb[i][j] = __llbmc_nondef_int();
  }
  }
  #else
  klee_make_symbolic(symb, (sizeof(int ) * (unsigned int )BOUND) * 32U, "symb");
  #endif
  
  
  #ifdef LLBMC
  P1 = __llbmc_nondef_int();
  P2 = __llbmc_nondef_int();
  P3 = __llbmc_nondef_int();
  P4 = __llbmc_nondef_int();
  P5 = __llbmc_nondef_int();
  P6 = __llbmc_nondef_int();
  P7 = __llbmc_nondef_int();
  P8 = __llbmc_nondef_int();
  P9 = __llbmc_nondef_int();
  #else
  klee_make_symbolic(& P1, sizeof(int ), "P1");
  klee_make_symbolic(& P2, sizeof(int ), "P2");
  klee_make_symbolic(& P3, sizeof(int ), "P3");
  klee_make_symbolic(& P4, sizeof(int ), "P4");
  klee_make_symbolic(& P5, sizeof(int ), "P5");
  klee_make_symbolic(& P6, sizeof(int ), "P6");
  klee_make_symbolic(& P7, sizeof(int ), "P7");
  klee_make_symbolic(& P8, sizeof(int ), "P8");
  klee_make_symbolic(& P9, sizeof(int ), "P9");
   #endif
  FLAG___0 = 0;
  while (FLAG___0 < BOUND) {
    if (this_expect > 16) {
      this_expect = -16;
    }
    if (q == 0) {
      if ((*(symb + FLAG___0))[1]) {
        if (dummy == 1) {
          method_id = 1;
          if (dummy != 1) {
            goto ERROR;
          }
          q = 1;
          this_expect = 0;
          this_buffer_empty = 1;
        }
        goto __Cont;
      }
      goto __Cont;
    }
    if (q == 1) {
      if ((*(symb + FLAG___0))[2]) {
        if (! (P1 % 2 != 0)) {
          method_id = 2;
          if (P1 % 2 != this_expect % 2) {
            if (this_buffer_empty == 1) {
              if (! (P1 % 2 != 0)) {
                goto ERROR;
              } else {
                goto _L___0;
              }
            } else {
              goto _L___0;
            }
          } else {
            _L___0: /* CIL Label */ 
            if (this_buffer_empty != 1) {
              if (! (P1 % 2 != 0)) {
                goto ERROR;
              }
            }
          }
          q = 3;
          this_expect = this_expect + 1;
          this_buffer_empty = 1 - this_buffer_empty;
        }
        goto __Cont;
      }
      if ((*(symb + FLAG___0))[3]) {
        if (! (P1 != 0)) {
          method_id = 3;
          if (P3 == (this_expect - 1) % 2) {
            if (this_buffer_empty != 1) {
              if (! (P3 != 0)) {
                goto ERROR;
              }
            }
          }
          q = 2;
          break;
        }
        goto __Cont;
      }
      if ((*(symb + FLAG___0))[4]) {
        if (P1 % 2 != 0) {
          if (P1 % 2 != 1) {
            if (P1 % 2 != 0) {
              method_id = 4;
              if (P4 % 2 == this_expect % 2) {
                if (this_buffer_empty == 1) {
                  if (P4 % 2 != 0) {
                    if (P4 % 2 != 0) {
                      if (P4 % 2 != 1) {
                        if (P4 % 2 != 0) {
                          goto ERROR;
                        }
                      }
                    }
                  }
                }
              }
              q = 2;
              break;
            }
          }
        }
        goto __Cont;
      }
      if ((*(symb + FLAG___0))[5]) {
        if (P1 % 2 != 0) {
          if (P1 % 2 != 1) {
            if (! (P1 % 2 != 0)) {
              goto _L___1;
            }
          } else {
            _L___1: /* CIL Label */ 
            method_id = 5;
            if (P6 % 2 == this_expect % 2) {
              if (this_buffer_empty == 1) {
                if (P6 % 2 != 0) {
                  if (P6 % 2 != 0) {
                    if (P6 % 2 != 1) {
                      if (! (P6 % 2 != 0)) {
                        goto ERROR;
                      }
                    } else {
                      goto ERROR;
                    }
                  }
                }
              }
            }
            q = 2;
            break;
          }
        }
        goto __Cont;
      }
      if ((*(symb + FLAG___0))[6]) {
        if (P1 != 0) {
          if (P1 != 1) {
            if (P1 != 0) {
              method_id = 6;
              if (P8 == (this_expect - 1) % 2) {
                if (this_buffer_empty != 1) {
                  if (P8 != 0) {
                    if (P8 != 0) {
                      if (P8 != 1) {
                        if (P8 != 0) {
                          goto ERROR;
                        }
                      }
                    }
                  }
                }
              }
              q = 2;
              break;
            }
          }
        }
        goto __Cont;
      }
      if ((*(symb + FLAG___0))[7]) {
        if (P1 != 0) {
          if (P1 != 1) {
            if (! (P1 != 0)) {
              goto _L___2;
            }
          } else {
            _L___2: /* CIL Label */ 
            method_id = 7;
            if (P9 == (this_expect - 1) % 2) {
              if (this_buffer_empty != 1) {
                if (P9 != 0) {
                  if (P9 != 0) {
                    if (P9 != 1) {
                      if (! (P9 != 0)) {
                        goto ERROR;
                      }
                    } else {
                      goto ERROR;
                    }
                  }
                }
              }
            }
            q = 2;
            break;
          }
        }
        goto __Cont;
      }
      goto __Cont;
    }
    if (q == 2) {
      if ((*(symb + FLAG___0))[8]) {
        if (! (P1 % 2 != 0)) {
          method_id = 2;
          if (P1 % 2 == this_expect % 2) {
            if (this_buffer_empty == 1) {
              if (! (P1 % 2 != 0)) {
                goto ERROR;
              }
            }
          }
          q = 2;
          break;
        }
        goto __Cont;
      }
      if ((*(symb + FLAG___0))[9]) {
        if (! (P1 != 0)) {
          method_id = 3;
          if (P3 == (this_expect - 1) % 2) {
            if (this_buffer_empty != 1) {
              if (! (P3 != 0)) {
                goto ERROR;
              }
            }
          }
          q = 2;
          break;
        }
        goto __Cont;
      }
      if ((*(symb + FLAG___0))[10]) {
        if (P1 % 2 != 0) {
          if (P1 % 2 != 1) {
            if (P1 % 2 != 0) {
              method_id = 4;
              if (P4 % 2 == this_expect % 2) {
                if (this_buffer_empty == 1) {
                  if (P4 % 2 != 0) {
                    if (P4 % 2 != 0) {
                      if (P4 % 2 != 1) {
                        if (P4 % 2 != 0) {
                          goto ERROR;
                        }
                      }
                    }
                  }
                }
              }
              q = 2;
              break;
            }
          }
        }
        goto __Cont;
      }
      if ((*(symb + FLAG___0))[11]) {
        if (P1 % 2 != 0) {
          if (P1 % 2 != 1) {
            if (! (P1 % 2 != 0)) {
              goto _L___3;
            }
          } else {
            _L___3: /* CIL Label */ 
            method_id = 5;
            if (P6 % 2 == this_expect % 2) {
              if (this_buffer_empty == 1) {
                if (P6 % 2 != 0) {
                  if (P6 % 2 != 0) {
                    if (P6 % 2 != 1) {
                      if (! (P6 % 2 != 0)) {
                        goto ERROR;
                      }
                    } else {
                      goto ERROR;
                    }
                  }
                }
              }
            }
            q = 2;
            break;
          }
        }
        goto __Cont;
      }
      if ((*(symb + FLAG___0))[12]) {
        if (P1 != 0) {
          if (P1 != 1) {
            if (P1 != 0) {
              method_id = 6;
              if (P8 == (this_expect - 1) % 2) {
                if (this_buffer_empty != 1) {
                  if (P8 != 0) {
                    if (P8 != 0) {
                      if (P8 != 1) {
                        if (P8 != 0) {
                          goto ERROR;
                        }
                      }
                    }
                  }
                }
              }
              q = 2;
              break;
            }
          }
        }
        goto __Cont;
      }
      if ((*(symb + FLAG___0))[13]) {
        if (P1 != 0) {
          if (P1 != 1) {
            if (! (P1 != 0)) {
              goto _L___4;
            }
          } else {
            _L___4: /* CIL Label */ 
            method_id = 7;
            if (P9 == (this_expect - 1) % 2) {
              if (this_buffer_empty != 1) {
                if (P9 != 0) {
                  if (P9 != 0) {
                    if (P9 != 1) {
                      if (! (P9 != 0)) {
                        goto ERROR;
                      }
                    } else {
                      goto ERROR;
                    }
                  }
                }
              }
            }
            q = 2;
            break;
          }
        }
        goto __Cont;
      }
      goto __Cont;
    }
    if (q == 3) {
      if ((*(symb + FLAG___0))[14]) {
        if (! (P1 % 2 != 0)) {
          method_id = 2;
          if (P1 % 2 == this_expect % 2) {
            if (this_buffer_empty == 1) {
              if (! (P1 % 2 != 0)) {
                goto ERROR;
              }
            }
          }
          q = 2;
          break;
        }
        goto __Cont;
      }
      if ((*(symb + FLAG___0))[15]) {
        if (! (P1 != 0)) {
          method_id = 3;
          if (this_buffer_empty == 1) {
            if (! (P3 != 0)) {
              goto ERROR;
            } else {
              goto _L___5;
            }
          } else {
            _L___5: /* CIL Label */ 
            if (P3 != (this_expect - 1) % 2) {
              if (this_buffer_empty != 1) {
                if (! (P3 != 0)) {
                  goto ERROR;
                }
              }
            }
          }
          q = 4;
          this_expect = this_expect;
          this_buffer_empty = 1 - this_buffer_empty;
        }
        goto __Cont;
      }
      if ((*(symb + FLAG___0))[16]) {
        if (P1 % 2 != 0) {
          if (P1 % 2 != 1) {
            if (P1 % 2 != 0) {
              method_id = 4;
              if (P4 % 2 == this_expect % 2) {
                if (this_buffer_empty == 1) {
                  if (P4 % 2 != 0) {
                    if (P4 % 2 != 0) {
                      if (P4 % 2 != 1) {
                        if (P4 % 2 != 0) {
                          goto ERROR;
                        }
                      }
                    }
                  }
                }
              }
              q = 2;
              break;
            }
          }
        }
        goto __Cont;
      }
      if ((*(symb + FLAG___0))[17]) {
        if (P1 % 2 != 0) {
          if (P1 % 2 != 1) {
            if (! (P1 % 2 != 0)) {
              goto _L___6;
            }
          } else {
            _L___6: /* CIL Label */ 
            method_id = 5;
            if (P6 % 2 == this_expect % 2) {
              if (this_buffer_empty == 1) {
                if (P6 % 2 != 0) {
                  if (P6 % 2 != 0) {
                    if (P6 % 2 != 1) {
                      if (! (P6 % 2 != 0)) {
                        goto ERROR;
                      }
                    } else {
                      goto ERROR;
                    }
                  }
                }
              }
            }
            q = 2;
            break;
          }
        }
        goto __Cont;
      }
      if ((*(symb + FLAG___0))[18]) {
        if (P1 != 0) {
          if (P1 != 1) {
            if (P1 != 0) {
              method_id = 6;
              if (P8 == (this_expect - 1) % 2) {
                if (this_buffer_empty != 1) {
                  if (P8 != 0) {
                    if (P8 != 0) {
                      if (P8 != 1) {
                        if (P8 != 0) {
                          goto ERROR;
                        }
                      }
                    }
                  }
                }
              }
              q = 2;
              break;
            }
          }
        }
        goto __Cont;
      }
      if ((*(symb + FLAG___0))[19]) {
        if (P1 != 0) {
          if (P1 != 1) {
            if (! (P1 != 0)) {
              goto _L___7;
            }
          } else {
            _L___7: /* CIL Label */ 
            method_id = 7;
            if (P9 == (this_expect - 1) % 2) {
              if (this_buffer_empty != 1) {
                if (P9 != 0) {
                  if (P9 != 0) {
                    if (P9 != 1) {
                      if (! (P9 != 0)) {
                        goto ERROR;
                      }
                    } else {
                      goto ERROR;
                    }
                  }
                }
              }
            }
            q = 2;
            break;
          }
        }
        goto __Cont;
      }
      goto __Cont;
    }
    if (q == 4) {
      if ((*(symb + FLAG___0))[20]) {
        if (! (P1 % 2 != 0)) {
          method_id = 2;
          if (P1 % 2 == this_expect % 2) {
            if (this_buffer_empty == 1) {
              if (! (P1 % 2 != 0)) {
                goto ERROR;
              }
            }
          }
          q = 2;
          break;
        }
        goto __Cont;
      }
      if ((*(symb + FLAG___0))[21]) {
        if (! (P1 != 0)) {
          method_id = 3;
          if (P3 == (this_expect - 1) % 2) {
            if (this_buffer_empty != 1) {
              if (! (P3 != 0)) {
                goto ERROR;
              }
            }
          }
          q = 2;
          break;
        }
        goto __Cont;
      }
      if ((*(symb + FLAG___0))[22]) {
        if (P1 % 2 != 0) {
          if (P1 % 2 != 1) {
            if (P1 % 2 != 0) {
              method_id = 4;
              if (P4 % 2 == this_expect % 2) {
                if (this_buffer_empty == 1) {
                  if (P4 % 2 != 0) {
                    if (P4 % 2 != 0) {
                      if (P4 % 2 != 1) {
                        if (P4 % 2 != 0) {
                          goto ERROR;
                        }
                      }
                    }
                  }
                }
              }
              q = 2;
              break;
            }
          }
        }
        goto __Cont;
      }
      if ((*(symb + FLAG___0))[23]) {
        if (P1 % 2 != 0) {
          if (P1 % 2 != 1) {
            if (! (P1 % 2 != 0)) {
              goto _L___11;
            }
          } else {
            _L___11: /* CIL Label */ 
            method_id = 5;
            if (P6 % 2 != this_expect % 2) {
              if (this_buffer_empty == 1) {
                if (P6 % 2 != 0) {
                  if (P6 % 2 != 0) {
                    if (P6 % 2 != 1) {
                      if (P6 % 2 != 0) {
                        goto _L___10;
                      } else {
                        goto ERROR;
                      }
                    } else {
                      goto ERROR;
                    }
                  } else {
                    goto _L___10;
                  }
                } else {
                  goto _L___10;
                }
              } else {
                goto _L___10;
              }
            } else {
              _L___10: /* CIL Label */ 
              if (this_buffer_empty != 1) {
                if (P6 % 2 != 0) {
                  if (P6 % 2 != 0) {
                    if (P6 % 2 != 1) {
                      if (! (P6 % 2 != 0)) {
                        goto ERROR;
                      }
                    } else {
                      goto ERROR;
                    }
                  }
                }
              }
            }
            q = 5;
            this_expect = this_expect + 1;
            this_buffer_empty = 1 - this_buffer_empty;
          }
        }
        goto __Cont;
      }
      if ((*(symb + FLAG___0))[24]) {
        if (P1 != 0) {
          if (P1 != 1) {
            if (P1 != 0) {
              method_id = 6;
              if (P8 == (this_expect - 1) % 2) {
                if (this_buffer_empty != 1) {
                  if (P8 != 0) {
                    if (P8 != 0) {
                      if (P8 != 1) {
                        if (P8 != 0) {
                          goto ERROR;
                        }
                      }
                    }
                  }
                }
              }
              q = 2;
              break;
            }
          }
        }
        goto __Cont;
      }
      if ((*(symb + FLAG___0))[25]) {
        if (P1 != 0) {
          if (P1 != 1) {
            if (! (P1 != 0)) {
              goto _L___12;
            }
          } else {
            _L___12: /* CIL Label */ 
            method_id = 7;
            if (P9 == (this_expect - 1) % 2) {
              if (this_buffer_empty != 1) {
                if (P9 != 0) {
                  if (P9 != 0) {
                    if (P9 != 1) {
                      if (! (P9 != 0)) {
                        goto ERROR;
                      }
                    } else {
                      goto ERROR;
                    }
                  }
                }
              }
            }
            q = 2;
            break;
          }
        }
        goto __Cont;
      }
      goto __Cont;
    }
    if (q == 5) {
      if ((*(symb + FLAG___0))[26]) {
        if (! (P1 % 2 != 0)) {
          method_id = 2;
          if (P1 % 2 == this_expect % 2) {
            if (this_buffer_empty == 1) {
              if (! (P1 % 2 != 0)) {
                goto ERROR;
              }
            }
          }
          q = 2;
          break;
        }
        goto __Cont;
      }
      if ((*(symb + FLAG___0))[27]) {
        if (! (P1 != 0)) {
          method_id = 3;
          if (P3 == (this_expect - 1) % 2) {
            if (this_buffer_empty != 1) {
              if (! (P3 != 0)) {
                goto ERROR;
              }
            }
          }
          q = 2;
          break;
        }
        goto __Cont;
      }
      if ((*(symb + FLAG___0))[28]) {
        if (P1 % 2 != 0) {
          if (P1 % 2 != 1) {
            if (P1 % 2 != 0) {
              method_id = 4;
              if (P4 % 2 == this_expect % 2) {
                if (this_buffer_empty == 1) {
                  if (P4 % 2 != 0) {
                    if (P4 % 2 != 0) {
                      if (P4 % 2 != 1) {
                        if (P4 % 2 != 0) {
                          goto ERROR;
                        }
                      }
                    }
                  }
                }
              }
              q = 2;
              break;
            }
          }
        }
        goto __Cont;
      }
      if ((*(symb + FLAG___0))[29]) {
        if (P1 % 2 != 0) {
          if (P1 % 2 != 1) {
            if (! (P1 % 2 != 0)) {
              goto _L___13;
            }
          } else {
            _L___13: /* CIL Label */ 
            method_id = 5;
            if (P6 % 2 == this_expect % 2) {
              if (this_buffer_empty == 1) {
                if (P6 % 2 != 0) {
                  if (P6 % 2 != 0) {
                    if (P6 % 2 != 1) {
                      if (! (P6 % 2 != 0)) {
                        goto ERROR;
                      }
                    } else {
                      goto ERROR;
                    }
                  }
                }
              }
            }
            q = 2;
            break;
          }
        }
        goto __Cont;
      }
      if ((*(symb + FLAG___0))[30]) {
        if (P1 != 0) {
          if (P1 != 1) {
            if (P1 != 0) {
              method_id = 6;
              if (P8 == (this_expect - 1) % 2) {
                if (this_buffer_empty != 1) {
                  if (P8 != 0) {
                    if (P8 != 0) {
                      if (P8 != 1) {
                        if (P8 != 0) {
                          goto ERROR;
                        }
                      }
                    }
                  }
                }
              }
              q = 2;
              break;
            }
          }
        }
        goto __Cont;
      }
      if ((*(symb + FLAG___0))[31]) {
        if (P1 != 0) {
          if (P1 != 1) {
            if (! (P1 != 0)) {
              goto _L___16;
            }
          } else {
            _L___16: /* CIL Label */ 
            method_id = 7;
            if (this_buffer_empty == 1) {
              if (P9 != 0) {
                if (P9 != 0) {
                  if (P9 != 1) {
                    if (P9 != 0) {
                      goto _L___15;
                    } else {
                      goto ERROR;
                    }
                  } else {
                    goto ERROR;
                  }
                } else {
                  goto _L___15;
                }
              } else {
                goto _L___15;
              }
            } else {
              _L___15: /* CIL Label */ 
              if (P9 != (this_expect - 1) % 2) {
                if (this_buffer_empty != 1) {
                  if (P9 != 0) {
                    if (P9 != 0) {
                      if (P9 != 1) {
                        if (! (P9 != 0)) {
                          goto ERROR;
                        }
                      } else {
                        goto ERROR;
                      }
                    }
                  }
                }
              }
            }
            q = 1;
            this_expect = this_expect;
            this_buffer_empty = 1 - this_buffer_empty;
          }
        }
        goto __Cont;
      }
      goto __Cont;
    }
    __Cont: /* CIL Label */ 
    FLAG___0 = FLAG___0 + 1;
  }
  ERROR: 
  tracerx_check();
  return (0);
}
}
