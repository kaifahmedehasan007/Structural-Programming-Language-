#include <stdio.h>
#include <string.h>

// Structure with a string member
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};

int main() {
  struct myStructure s1;

  // Strings can't be assigned with =, so use strcpy()
  strcpy(s1.myString, "Some text");

  // Print the value
  printf("My string: %s\n", s1.myString);

  return 0;
}
