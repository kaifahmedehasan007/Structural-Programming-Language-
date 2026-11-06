#include <stdio.h>

int main() {
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("int: %zu bytes\n", sizeof(myInt));
    printf("float: %zu bytes\n", sizeof(myFloat));
    printf("double: %zu bytes\n", sizeof(myDouble));
    printf("char: %zu bytes\n", sizeof(myChar));
    return 0;
}
