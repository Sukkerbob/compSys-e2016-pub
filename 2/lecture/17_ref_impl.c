#include <stdio.h>

#define BAD_INPUT 0
#define SUCCESS 0
#define FAILURE 1

int add (int a, int b) {
  return (a + b);
}

int add_cbr (int *a, int *b) {
  int res = (*a + *b);
  (*a) = (*b);
  return res;
}

int inc (int *a, int *b) {
  (*a) = *a + *b;
  return SUCCESS;
}


int main(int argc, char *argv[]) {
  int input;
  int input2;
  int result;

  if(argc == 3) { // 1st argument is the name of the program
    int res;
    res = sscanf(argv[1],"%d", &input);
    res = sscanf(argv[2],"%d", &input2);
    if (res == BAD_INPUT) {
      printf("Bad value\n");
    }
    else {
      printf("Input: %d\n", input);
      result = inc(&input, &input2);
      printf("Input again: %d \n", input);
      printf("Result: %d \n", result);
    }
  }
}



