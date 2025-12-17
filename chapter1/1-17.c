// Prints all input lines longer than 80 characters
#include <stdio.h>

#define MAX_LEN 1000

// Loads the next line into the input buffer and returns the line size
int get_line(char buffer[]);

// Prints the provided char[]
void print_line(char line[]);

int main()
{
    char buffer[MAX_LEN];
    int current = get_line(buffer);

    while (current > 0)
    {
        if (current > 80) 
            print_line(buffer);
        current = get_line(buffer);
    }

    return 0;
}

int get_line(char buffer[])
{
    int c, i;

    i = 0;
    while ((c = getchar()) != EOF && c != '\n')
    {
        buffer[i] = c;
        i++;
    }

    if (c == '\n')
    {
        buffer[i] = c;
        i++;
    }

    buffer[i] = '\0';

    return i;
}


void print_line(char line[])
{
    int i = 0; 

    while (line[i] != '\0')
    {
        printf("%c", line[i++]);
    }

    printf("\n");
}
