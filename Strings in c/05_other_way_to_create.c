#include <stdio.h>

int main() {
  // Create a string using individual characters
  // The '\0' at the end marks the end of the string
  char greetings[] = {'H', 'e', 'l', 'l', 'o', '\0'};

  printf("%s\n", greetings);

  return 0;
}
