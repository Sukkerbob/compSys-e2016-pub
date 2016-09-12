#include <stdio.h>

int fib(int fib_num);

int main() {
// int main(int argc, char* argv[]) {
  int fib_num;
  int result;
  // printf ("Give me a number:\n");
  // scanf("%d", &fib_num);

  fib_num = 40;

  result = fib(fib_num);

  printf ("Result is: %d\n", result);
}

int fib(int fib_num) {
  if (fib_num == 1 || fib_num == 2) {
    return 1;
  }
  else {
    return fib(fib_num - 2) + fib(fib_num - 1);
  }
}
