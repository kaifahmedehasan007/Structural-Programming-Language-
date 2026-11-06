#include <stdio.h>

int main() {
    int x = 5, y = 3;

    // comparison: result is 1 (true) or 0 (false)
    printf("x > y  : %d\n", x > y);
    printf("x == y : %d\n", x == y);
    printf("x != y : %d\n", x != y);

    // logical operators
    printf("x > 3 && x < 10 : %d\n", x > 3 && x < 10);
    printf("x > 3 || x < 4  : %d\n", x > 3 || x < 4);
    printf("!(x > 3)        : %d\n", !(x > 3));
    return 0;
}
