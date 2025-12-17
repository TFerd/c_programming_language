// Reverses each line of an input
#include <stdio.h>

#define MAX_LEN 1000

int get_line(char buffer[]);
void reverse(char c[]);
void print(char c[]);

int main()
{
    char buffer[MAX_LEN];

    while (get_line(buffer) == 0)
    {
        printf("Line before: ");
        print(buffer);
        reverse(buffer);
        printf("\nLine after: ");
        print(buffer);
        printf("\n");
    }

    return 0;
}

// Loads next line of input into input buffer.
// Returns 1 if reached EOF, returns 0 otherwise.
int get_line(char buffer[])
{
    int c;
    int i = 0;
    while (i < MAX_LEN && (c = getchar()) != '\n' && c != EOF)
    {
        buffer[i++] = c;
    }

    if (c == EOF)
    {
        return 1;
    }

    buffer[i] = '\0';
    return 0;
}

// Reverses input s[]
void reverse(char c[])
{
    char temp;
    int i = 0;
    int j = 0;

    // set j to back of array
    while (c[j] != '\0')
        j++;

    j--;
    while (i < j)
    {
        temp = c[i];
        c[i] = c[j];
        c[j] = temp;

        i++;
        j--;
    }
}

// Prints input c[] on one line
void print(char c[])
{
    int i;
    for (i = 0; c[i] != '\0'; i++)
        printf("%c", c[i]);
}
