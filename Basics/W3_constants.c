#include <stdio.h>

int main() {
    const int minutesPerHour = 60;
    const float PI = 3.14;

    printf("%d\n", minutesPerHour);
    printf("%.2f\n", PI);

    // minutesPerHour = 30;  // error: constants can't be changed
    return 0;
}
