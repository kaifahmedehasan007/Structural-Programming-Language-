#include <stdio.h>

struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
  struct myStructure s1 = {13, 'B'};
  struct myStructure s2;

  // Copy s1 values to s2
  s2 = s1;

  // Print values of s2
  printf("My number: %d\n", s2.myNum);
  printf("My letter: %c\n", s2.myLetter);

  return 0;
}
