
#include <stdio.h>

int main(int argc, char* argv[]) {
  int c = 2;
  int a[16];
  int b = 2;
  a[0] = 1;
  for (int i = 1; i <= 18; i++) {
    a[i] = a[i-1] + 1;
  }
  printf("final = %d\n", a[15]);
  printf("final b = %d\n", b);
}

int add(int a, int b) {
  a + b;
}