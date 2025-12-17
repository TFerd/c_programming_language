// Remove trailing blanks and tabs from each line of input
// and delete entirely empty blank lines
#include <stdio.h>

#define MAX_LEN 1000

// Loads next line into buffer
void get_line(char buffer[]);

// Removes trailing whitespace from input char[]
void trim(char input[]);

// Returns 1 if the input character is a blank, tab, or newline. 
// Else, returns 0.
int is_blank(char c);

int main()
{
    
    // go forward to populate the array
    // then, reverse until you reach a char,
    // removing any tabs or whitespace.
    // remove by just moving the '\0' char.

    return 0;
}

// lets change this: keep track of last char. Once we find the new line
// or EOF, set i+1 of last char to '\0'
void get_line_trimmed()
{
}


void get_line(char buffer[])
{
    int c = getchar();
    int i = 0;
    while ((c = getchar()) != EOF && c != '\n' && i < MAX_LEN)
    {
        buffer[i++] = c;
    }

    if (c == '\n')
    {
        buffer[i] = c;
        i++
    }

    buffer[i] = '\0';
}

void trim(char input[])
{
    int i;

    // go to back of array
    while (input[i] != '\0' && i < MAX_LEN)
    {
        i++;
    }

    // reached back, go to next char
    while (i >= 0 && input[i] && is_blank(input[i]) == 1)
    {
        
    }
}

int is_blank(char c)
{
    if (c == ' ' || c == '\t' || c == '\n')
        return 1;

    return 0
}
