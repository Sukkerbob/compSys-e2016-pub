
#include <stdio.h>

#define SUCCESS 0
#define FAILURE 1

int inc (int* a, int* b) {
  (*a) = *a + *b;
  return SUCCESS;
}

int main(int argc, char *argv[]) {
  int input1 = 3;
  int input2 = 4;
  int result;

  result = inc(&input1, &input2);
  printf("Input again: %d \n", input1);
  printf("Status result: %d \n", result);
}