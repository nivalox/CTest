#include <stdio.h>

int main(void) {
  int x = 67;
  int *p = &x;
  // omg bro tf is &x & *p :(
  printf("%d\n", x);
  printf("%p\n", (void *)p); // the FUCK is this
  printf("%d\n", *p);
  // this is a hellspawn of a script
  *p = 69;
  printf("%d\n", x); // num
  return 0;
}
