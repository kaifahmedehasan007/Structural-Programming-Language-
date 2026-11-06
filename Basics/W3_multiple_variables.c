#include <stdio.h>

int main() {
    // many variables of the same type
    int x = 5, y = 6, z = 50;
    printf("%d\n", x + y + z);

    // same value to many variables
    int a, b, c;
    a = b = c = 50;
    printf("%d %d %d\n", a, b, c);
    return 0;
}
