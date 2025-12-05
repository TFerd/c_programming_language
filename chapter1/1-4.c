#include <stdio.h>

// Celsius to F converter
int main() {
    float fahr, celsius;
    float lower, upper, interval;

    lower = 0;
    upper = 100;
    interval = 5;

    celsius = lower;

    printf("\n\n%s\t%s\n", "C", "F");
    while (celsius < upper) {
        fahr = (celsius * 1.8) + 32.0;
        printf("%6.0f\t%3.0f\n", celsius, fahr);
        celsius = celsius + interval;
    }
}