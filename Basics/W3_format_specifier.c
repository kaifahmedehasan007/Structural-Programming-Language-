#include <stdio.h>

int main() {
    int myNum = 15;
    char myLetter = 'D';
    float myFloat = 5.99;

    printf("%d\n", myNum);     // int
    printf("%c\n", myLetter);  // char
    printf("%f\n", myFloat);   // float
    printf("%.2f\n", myFloat); // float, 2 decimal places
    return 0;
}
