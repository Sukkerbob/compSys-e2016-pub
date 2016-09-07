#include <stdio.h>

int main(int argc, char* argv[]) {
  // int i;
  for (int i = 1; i < argc; i++) {
    printf("Argument number %d: %s\n", i, argv[i]);
  }
}
