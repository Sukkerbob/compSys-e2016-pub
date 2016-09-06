#include <stdio.h>

void copyij(int src[2048][2048],
            int dst[2048][2048])
{
  int i,j;
  for (j = 0; j < 2048; j++) {
    for (i = 0; i < 2048; i++) {
      dst[i][j] = src[i][j];
    }
  }
}


int main(int argc, char *argv[]) {
	int input1[2048][2048];
	int input2[2048][2048];

	copyij(input1, input2);
	printf("Done\n");
}




























 // gcc -o copybuf1 -Wl,-stack_size -Wl,0x3000000 copybuf1.c 
