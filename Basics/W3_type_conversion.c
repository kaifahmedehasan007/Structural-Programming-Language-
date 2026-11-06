#include <stdio.h>

int main() {
    // implicit conversion (automatic)
    int myInt = 9;
    float myFloat = myInt;
    printf("%f\n", myFloat);

    // integer division loses the decimal part
    int sum = 5 / 2;
    printf("%d\n", sum);

    // explicit conversion (casting) fixes it
    float sum2 = (float) 5 / 2;
    printf("%f\n", sum2);
    return 0;
}
