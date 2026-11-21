#include <stdio.h>
#include <string.h>

#define VERSION "0.1"

// New Line
void nl(void) {
  printf("\n");
}

// Print Banner
void printbanner(void) {
  printf("Welcome to NivShell");
  nl();
  printf("Version: %s\n", VERSION);
  nl();
  printf("Type 'help' for commands!");
  nl();
  nl();
}

// Help Function
void printhelp(void) {
  printf("help: shows this message");
  nl();
  printf("exit: closes the shell");
  nl();
}

// Main Function
int main(void) {
  char input[256];
  printbanner();
  while (1) {
    printf("niv@termux$ ");
    fflush(stdout);
    if (fgets(input, sizeof(input), stdin) == NULL)
      break;
    input[strcspn(input, "\n")] = '\0';
    if (strcmp(input, "help") == 0) {
      printhelp();
    }
    else if (strcmp(input, "exit") == 0) {
      break;
    }
  }
  return 0;
}
