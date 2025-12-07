#include <stdio.h>

// Flags that track if we are currently in a word
#define OUT 0
#define IN 1

// Program that counts the number of words in a given input
int main()
{
    int nw = 0;
    int state = OUT;

    int c;
    while((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            state = OUT;
        }
        else 
        {
            if (state == OUT) nw++;

            state = IN;
        }
    }

    printf("Number of words found: %d\n", nw);
}
