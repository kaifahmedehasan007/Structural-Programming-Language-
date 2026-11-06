#include <stdio.h>

int main() {
    int a = 10, b = 3;

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);   // integer division
    printf("a %% b = %d\n", a % b);  // remainder

    a++;  // increment
    b--;  // decrement
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
