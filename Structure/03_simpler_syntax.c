#include <stdio.h>

struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
  // Create a structure variable and assign values to it at the same time
  struct myStructure s1 = {13, 'B'};

  // Create another structure variable
  struct myStructure s2;

  // Assign values to it
  s2.myNum = 20;
  s2.myLetter = 'C';

  // Print values
  printf("%d %c\n", s1.myNum, s1.myLetter);
  printf("%d %c\n", s2.myNum, s2.myLetter);

  return 0;
}
