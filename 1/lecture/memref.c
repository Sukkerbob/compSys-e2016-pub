#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int a[2];
  double d;
} struct_t;

double fun(int i) {
  volatile struct_t s;
  s.d = 3.14;
  s.a[i] = 1073741824; /* Possibly out of bounds */
  return s.d;
}

int main(int argc, char *argv[]) {
	int input;
	double result;
	if(argc == 2) { // 1st argument is the name of the program
		int input = atoi(argv[1]);
		result = fun(input);
		printf("Result: %f \n", result);
	}
}