#include <stdio.h>

int kirk = 69;
char allah[] = "akbar";

void printint(int var) {
  printf("%d\n", var);
}

void printstr(const char *var) {
  printf("%s\n", var);
}

int main(void) {
  printint(67);
  printstr("gilbert");
  printf("%d\n", kirk);
  printf("%s\n", allah);
  return 0;
}

// why did i make this?
