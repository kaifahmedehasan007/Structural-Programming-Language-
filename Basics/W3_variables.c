#include <stdio.h>

int main() {
    int myNum = 15;
    float myFloat = 5.99;
    char myLetter = 'D';

    printf("%d\n", myNum);
    printf("%f\n", myFloat);
    printf("%c\n", myLetter);

    // change a value
    myNum = 20;
    printf("New value: %d\n", myNum);
    return 0;
}
