//
// Content: 
// Author:  Michael Kirkedal Thomsen
//
// Made for CompSys16 C, lecture 2
//

#include <stdio.h>
#include "myio.h"


int main() {
  char input[4];
  printf ("Give me a string:\n");
  fgets(input, sizeof(input), stdin);
  printf ("You wrote: %s\n", input);

  flush_stdin();

  printf ("Give me another string: \n");
  fgets(input, sizeof(input), stdin);
  printf ("You wrote: %s\n", input);
}
