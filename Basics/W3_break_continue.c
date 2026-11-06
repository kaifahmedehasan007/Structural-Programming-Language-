#include <stdio.h>

int main() {
    // break: stop the loop
    for (int i = 0; i < 10; i++) {
        if (i == 4) break;
        printf("%d\n", i);
    }

    printf("---\n");

    // continue: skip one iteration
    for (int i = 0; i < 10; i++) {
        if (i == 4) continue;
        printf("%d\n", i);
    }
    return 0;
}
