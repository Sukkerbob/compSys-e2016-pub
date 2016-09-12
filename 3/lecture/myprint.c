#include <stdio.h>

#define SUCCESS 0

int print_array(int length, int* intarray) {
  printf("[");
  for (int i = 0 ; i < length - 1 ; i++) {
    printf("%d, ", intarray[i]);
  }
  printf("%d", intarray[length - 1]);
  printf("]\n");

  return SUCCESS;
}