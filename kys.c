#include <unistd.h>
#include <signal.h>

int main(void) {
  kill(getpid(), SIGKILL);
  return 0;
}
