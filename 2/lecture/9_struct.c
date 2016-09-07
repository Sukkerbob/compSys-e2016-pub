
#include <stdio.h>

struct point {
  int x;
  int y;
};

struct point add(struct point p, struct point q) {
  struct point w =  {.x = p.x + q.x, .y = p.y + q.y};
  return w;
}

int main(int argc, char* argv[]) {
  struct point p = {.x=1, .y=2};
  struct point q = {.x=5, .y=7};
  struct point z = add(p,q);
  printf("final point = (%d, %d)\n", z.x, z.y);
}
