#include <stdio.h>

int main() {
    int myNum;
    char myChar;
    float myFloat;

    printf("Type a number: ");
    scanf("%d", &myNum);
    printf("Your number is: %d\n", myNum);

    printf("Type a decimal: ");
    scanf("%f", &myFloat);
    printf("Your decimal is: %.2f\n", myFloat);

    printf("Type a character: ");
    scanf(" %c", &myChar);   // space before %c skips the leftover newline
    printf("Your character is: %c\n", myChar);
    return 0;
}
