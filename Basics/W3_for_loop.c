#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("%d\n", i);
    }

    // multiplication table of 2
    for (int i = 1; i <= 10; i++) {
        printf("2 x %d = %d\n", i, 2 * i);
    }
    return 0;
}
