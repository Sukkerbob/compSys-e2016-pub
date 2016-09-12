
#include <stdio.h>
#include "myprint.h"

#define SUCCESS 0

int qsort(int* intarray, int lo, int hi);
int partition(int* intarray, int lo, int hi);

int main () {

  int a[5];
  int elem = sizeof(a) / sizeof(a[0]);
  a[0] = 1;
  a[1] = 21;
  a[2] = 14;
  a[3] = 12;
  a[4] = 4;
  print_array(elem, a);
  qsort(a, 0, elem-1);
  print_array(elem, a);
}

int qsort (int* intarray, int lo, int hi) {
  if (lo < hi) {
    int p = partition(intarray, lo, hi);
    qsort(intarray, lo, p - 1);
    qsort(intarray, p + 1, hi);
  }
  return SUCCESS;
}

int partition(int* intarray, int lo, int hi) {
  int pivot = intarray[hi];

  while (lo < hi) {
    if (intarray[lo] <= pivot) {
      lo++;
    }
    else {
      // Error found.
      // I had already taken the hi-element from my array,
      // so I can just put the lo-element at hi and the hi-1 at lo.
      // int tmp = intarray[lo];
      // intarray[lo] = intarray[hi];
      // intarray[hi] = tmp;
      intarray[hi] = intarray[lo];
      intarray[lo] = intarray[hi - 1];
      hi--;
    }
  }
  intarray[hi] = pivot;
  return hi;
}
