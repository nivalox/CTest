#include <stdio.h>
#include <string.h>
#include <time.h> // for later

#define VERSION "0.1.67"

// New Line
void nl(void) {
  printf("\n");
}

void echo67(const char *str) {
  printf("%s", str);
  nl();
}

// Time Function
void tellthefuckingtime(void) {
  printf("why the FUCK are u asking me? look at the damn clock in the corner of your screen.");
  nl();
}

// Print Banner
void printbanner(void) {
  printf("Welcome to NivShell");
  nl();
  printf("Version: %s", VERSION);
  nl();
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
  printf("echo: echos a string");
  nl();
  printf("version: tells u the version of the shell");
  nl();
  printf("time: shows your real local time (technically not a lie)");
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
    if (input[0] == '\0') {
      continue;
    }
    else if (strcmp(input, "help") == 0) {
      printhelp();
    }
    else if (strncmp(input, "echo ", 5) == 0) {
      echo67(input + 5);
    }
    else if (strcmp(input, "time") == 0) {
      tellthefuckingtime();
    }
    else if (strcmp(input, "version") == 0) {
      printf("Version: %s", VERSION);
      nl();
    }
    else if (strcmp(input, "exit") == 0) {
      printf("Exiting NivShell via %s", input);
      nl();
      break;
    }
    else {
      printf("Unknown Command: %s", input);
      nl();
    }
  }
  return 0;
}
