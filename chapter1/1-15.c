// 1-15 - Fahrenheit to celsius converter
#include <stdio.h>

#define LOWER 0
#define UPPER 100
#define INTERVAL 5

float convert(float fahr);

int main()
{
    printf("\n%4s\t|\t%6s\n", "Fahr", "Celsius");

    float i;
    for (i = LOWER; i <= UPPER; i = i + INTERVAL)
    {
        float celsius = convert(i);
        printf("%2.0f | %2.0f\n", i, celsius);
    }

    return 0; 
}

/*
*  Converts input to celsius
*/
float convert(float fahr)
{
    return (5.0 / 9.0) * (fahr - 32.0);
}
