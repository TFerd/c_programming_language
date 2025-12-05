#include <stdio.h>

#define LOWER 0
#define UPPER 100
#define INTERVAL 5

// Fahrenheit to celsius converter
int main() {
    float fahr, celsius;

    fahr = LOWER;

    printf("\n\n%s\t%s\n", "Fahr", "Celcius");
    while (fahr < UPPER) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + INTERVAL;
    }
}