#include <stdio.h>

// Prints a histogram of the lengths of words in a given input
int main()
{
    unsigned int sizes[10];
    unsigned int size = 0;

    int c;
    while((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (size >= 9)
            {
                sizes[9]++;
            }
            else if (size > 0)
            {
                sizes[size]++;
            }
            
            size = 0;
        }
        else
        {
            size++;
        }
    }

    // get max count to determine height of histogram
    unsigned int max = 0;
    unsigned int i;
    size_t n = sizeof(sizes)/sizeof(unsigned int);
    for (i = 0; i < n; i++)
    {
        if (sizes[i] > max)
        {
            max = sizes[i];
        }
    }

    // print the histogram
    printf("\n");
    for (i = max; i >= 1; i--)
    {
        printf("%2u |", i);

        unsigned int j;
        for (j = 1; j < n; j++)
        {
           if (sizes[j] >= i)
           {
               printf("%2c", '#');
           }
           else
           {
               printf("%2c", '-');
           }
        }

        printf("\n");
    }

    printf("%2c%2c", ' ', ' ');
    for(i = 1; i < n; i++) 
    {
        printf("%2c",'_');
    }
    printf("\n%2c%2c", ' ', ' ');
    for(i = 1; i < n; i++)
    {
        printf("%2u", i);
    }

    printf("+\n");
}
