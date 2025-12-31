// 1-18: Remove trailing blanks and tabs from each line of input
// and delete entirely empty blank lines
#include <stdio.h>

#define MAX_LEN 1000

int get_line_trimmed(char buffer[]);
int is_blank(char c);
void print_line(char line[]);

int main()
{
    char buffer[MAX_LEN];
    int status;

    while ((status = get_line_trimmed(buffer)) == 0)
    {
        print_line(buffer);
    }

    return 0;
}

// Loads the next line of the input into buffer, removing trailing blanks
int get_line_trimmed(char buffer[])
{
    int c;
    int i = 0;
    int last_char = -1;

    while (i < MAX_LEN-1 && (c = getchar()) != EOF && c != '\n')
    {
        if (is_blank(c) == 0)
        {
            last_char = i;
        }

        buffer[i++] = c;
    }

    buffer[last_char + 1] = '\0';

    if (c == EOF)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

// Returns 1 if the input character is a blank, tab, or newline. 
// Else, returns 0.
int is_blank(char c)
{
    if (c == ' ' || c == '\t' || c == '\n')
        return 1;

    return 0;
}

// Prints input char[]
void print_line(char line[])
{
    int i = 0;

    // break early on empty line
    if (line[i] == '\0')
        return;

    while (line[i] != '\0')
    {
        printf("%c", line[i++]);
    }
    
    printf("|"); // marks end of line to test trailing whitespaces
    printf("\n");
}

