#include <stdio.h>

// Fahrenheit to celsius converter (reversed)
int main() {
    printf("\n\n%3s\t%3s\n", "Fahr", "Celsius");

    float fahr;
    for (fahr = 300.0; fahr >= 0.0; fahr = fahr - 20.0) {
        printf("%3.0f\t%3.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
    }
}