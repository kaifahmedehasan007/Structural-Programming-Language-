#include <stdio.h>
#include <string.h>

int main() {
  char str1[20] = "Hello ";
  char str2[] = "World!";

  // Append str2 to the end of str1
  strcat(str1, str2);

  printf("%s\n", str1);

  return 0;
}
