#include <stdio.h>

int main() {
  char greetings[] = "Hello World!";

  // Change the first character
  greetings[0] = 'J';

  printf("%s\n", greetings);

  return 0;
}
