#include <stdio.h>

int main() {
    int i = 0;

    // runs at least once, even if the condition is false
    do {
        printf("%d\n", i);
        i++;
    } while (i < 5);
    return 0;
}
