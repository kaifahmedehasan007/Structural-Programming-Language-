#include <stdio.h>

int main() {
    int time = 20;

    if (time < 12) {
        printf("Good morning.\n");
    } else if (time < 18) {
        printf("Good afternoon.\n");
    } else {
        printf("Good evening.\n");
    }

    // short hand (ternary)
    int age = 20;
    (age >= 18) ? printf("Adult\n") : printf("Minor\n");
    return 0;
}
