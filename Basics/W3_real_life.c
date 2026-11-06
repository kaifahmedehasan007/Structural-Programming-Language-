#include <stdio.h>

int main() {
    // average of 3 marks
    float m1 = 80, m2 = 75, m3 = 90;
    float avg = (m1 + m2 + m3) / 3;
    printf("Average marks: %.2f\n", avg);

    // area of a circle
    float r = 5, PI = 3.1416;
    printf("Area: %.2f\n", PI * r * r);

    // sum of 1 to 10
    int sum = 0;
    for (int i = 1; i <= 10; i++) sum += i;
    printf("Sum 1..10 = %d\n", sum);
    return 0;
}
