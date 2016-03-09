/*
 * Bubble sort
 * 
 * Copyright 2016 National University of Singapore 
 *
 * This is an example whose analysis by naive path
 * exploration is expensive. Note that the paper
 * "Sorting nine inputs requires twenty-five comparisons"
 * by Codish et al. http://arxiv.org/abs/1405.5754
 * suggests that in standard sorting algorithm there can 
 * possibly be plenty of superfluous comparisons.
 */
#include <klee/klee.h>
#include <assert.h>

#define ARRAY_SIZE 9

int main() {
  int a[ARRAY_SIZE];

  klee_make_symbolic(a, ARRAY_SIZE * sizeof(int), "a");

  for (int i=0; i < ARRAY_SIZE - 2; i++) {
    for (int j=i; j < ARRAY_SIZE - 1; j++) {
      if (a[j] > a[j+1]) {
	int tmp = a[j];
	a[j+1] = a[j];
	a[j] = tmp;
      }
    }
  }

  assert (a[0] <= a[1] &&
	  a[1] <= a[2] &&
	  a[2] <= a[3] &&
	  a[3] <= a[4] &&
	  a[4] <= a[5] &&
	  a[6] <= a[7] &&
	  a[7] <= a[8]);
}