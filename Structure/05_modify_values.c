#include <stdio.h>

struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
  // Create a structure variable and assign values to it
  struct myStructure s1 = {13, 'B'};

  // Modify the values
  s1.myNum = 30;
  s1.myLetter = 'C';

  // Print values
  printf("%d %c\n", s1.myNum, s1.myLetter);

  return 0;
}
