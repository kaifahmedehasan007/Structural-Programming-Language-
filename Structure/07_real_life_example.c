#include <stdio.h>
#include <string.h>

// Create a structure to store data about cars
struct Car {
  char brand[50];
  char model[50];
  int year;
};

int main() {
  // Create two car structure variables
  struct Car car1 = {"BMW", "X5", 1999};
  struct Car car2 = {"Ford", "Mustang", 1969};

  // Print the data
  printf("%s %s %d\n", car1.brand, car1.model, car1.year);
  printf("%s %s %d\n", car2.brand, car2.model, car2.year);

  return 0;
}
