#include <stdio.h>
#include <string.h>

int main() {
  char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  // strlen() counts the characters in the string
  printf("%zu\n", strlen(alphabet));

  // sizeof gives the size of the array in bytes (includes the '\0')
  printf("%zu\n", sizeof(alphabet));

  return 0;
}
