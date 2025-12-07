#include <stdio.h>

int main() 
{
    int c;
    while ((c = getchar()) != EOF) 
    {
        if (c == ' ')
        {
            putchar(c);
            while ((c = getchar()) != EOF && c == ' ');
            putchar(c);
        }
        else 
        {
            putchar(c);
        }
    }
}
