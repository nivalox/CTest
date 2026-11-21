#include <stdio.h>
#include <unistd.h>
// idk why im choosing to make this

// All the lyrics
const char *lyrics[] = {
  "I'm not a fan of puppeteers, but I've a nagging fear",
  "Someone else is pulling at the strings",
  "Something terrible is going down through the entire town",
  "Wreaking anarchy and all it brings",
  "I can't sit idly, no, I can't move at all",
  "I curse the name, the one behind it all",
  "Discord, I'm howlin' at the moon"
};

// Song Function
void songfunc(void) {
  for (int i = 0; i < 7; i++) {
    printf("%s\n", lyrics[i]);
    sleep(1);
  }
}

// Main Function
int main(void) {
  songfunc();
  return 0;
}

// cool little song thing
