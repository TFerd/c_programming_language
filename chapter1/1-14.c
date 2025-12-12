#include <stdio.h>

#define NUMBERS 10
#define ALPHA 26
#define OTHER 1

// Prints a histogram of the frequency of each character, case insensitive, in an input
int main() 
{
    unsigned int sizes[NUMBERS + ALPHA + OTHER];

    // initialize array to 0
    int i;
    int n = sizeof(sizes)/sizeof(unsigned int);
    for (i = 0; i < n; i++)
    {
        sizes[i] = 0;
    }

    int c;
    while ((c = getchar()) != EOF)
    {
        // digit
        if (c >= '0' && c <= '9')
        {
            sizes[c - '0']++;
        }
        // character lowercase
        else if (c >= 'a' && c <= 'z' )
        {
            sizes[c - 'a' + NUMBERS]++;
        }
        // character uppercase
        else if (c >= 'A' && c <= 'Z')
        {
            sizes[c - 'A' + NUMBERS]++;
        }
        // other
        else 
        {
            sizes[n - 1]++;
        }
    }

    // get max count to determine heigh of histogram
    unsigned int max = 0;
    for (i = 0; i < n; i++)
    {
        if (sizes[i] > max)
            max = sizes[i];
    }

    // print histogram
    printf("\n");
    for (i = max; i >= 1; i--)
    {
        printf("%2u |", i);

        unsigned int j;
        for (j = 0; j < n; j++)
        {
            if (sizes[j] >= i)
                printf("%2c", '#');
            else
                printf("%2c", '-');
        }

        printf("\n");
    }

    printf("%2c%2c", ' ', ' ');
    for (i = 0; i < n; i++)
    {
        printf("%2c", '_');
    }
    printf("\n%2c%2c", ' ', ' ');
    for (int i = 0; i < n - 1; i++)
    {
        if (i < NUMBERS)
        {
            printf("%2u", i);
        }
        else 
        {
            printf("%2c", (char)(i + 'a' - NUMBERS));
        }
    }

    printf("%2c\n", '?');
}
