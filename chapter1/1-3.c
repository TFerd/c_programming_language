#include <stdio.h>

// Fahrenheit to celsius converter
int main() {
    float fahr, celsius;
    float lower, upper, interval;

    lower = 0;
    upper = 100;
    interval = 5;

    fahr = lower;

    printf("\n\n%s\t%s\n", "Fahr", "Celcius");
    while (fahr < upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + interval;
    }
}