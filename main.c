#include <stdio.h>

int kirk = 69;

int printfunc(int var) {
  printf("%d\n", var);
  return 0;
}

int main(void) {
  printfunc(67);
  printf("%d\n", kirk);
  return 0;
}

// why did i make this?
