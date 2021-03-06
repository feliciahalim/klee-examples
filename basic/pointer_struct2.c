/*
 * Subsumption of linked lists. This example needs to be run with
 * depth-first strategy. Ideally, we want subsumption between paths as
 * the last memory access should be correct independent on the
 * existence of the third element of the linked list or not.
 *
 * Copyright 2017 National University of Singapore
 */
#include <stdlib.h>
#ifdef LLBMC
#include <llbmc.h>
#else
#include <klee/klee.h>
#endif

struct Node {
  char data;
  struct Node *next;
};

/* This builds list of a, b, ... up to given size. */
struct Node *make_list(int size) {
  struct Node *last = NULL;

  for (int i = 0; i < size; i++) {
    struct Node *new_node =
      (struct Node *) malloc(sizeof(struct Node));

    new_node->data = (char) (size - i + 96);
    new_node->next = last;
    last = new_node;
  }

  return last;
}

int main(int argc, char **argv) {
  struct Node *p;
  int p1, p2; // predicates
  int x = 0;

#ifdef LLBMC
  p1 = __llbmc_nondef_int();
  p2 = __llbmc_nondef_int();
#else
  klee_make_symbolic(&p1, sizeof(p1), "p1");
  klee_make_symbolic(&p2, sizeof(p2), "p2");
#endif

  if (p1) {
    p = make_list(2);
  } else {
    p = make_list(3);
  }

  if (p2) {
    x += 1;
  } else {
    x += 2;
  }

  // This memory access only concerns the first and second elements of
  // the linked list, hence whether the third element exists or not is
  // immaterial and we should see subsumptions.
  return p->next->data;
}
