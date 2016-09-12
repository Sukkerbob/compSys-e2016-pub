#include <stdio.h>

#define SUCCESS 1

int flush_stdin() {
  while (fgetc(stdin) != 10) {

  } 
  return SUCCESS;
}
