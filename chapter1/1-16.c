// Finds the longest line in an input and returns the length 
// and prints the line
#include <stdio.h>

#define MAX_LEN 1000

void copy(char input[], char output[]);
int get_line(char input[], int limit);

int main()
{
    char longest[MAX_LEN];
    char current[MAX_LEN];
    int current_len = 0;
    int longest_len = 0;

    current_len = get_line(current, MAX_LEN);
    while (current_len > 0)
    {
        if (current_len > longest_len)
        {
            copy(current, longest);
            longest_len = current_len;
        }

        current_len = get_line(current, MAX_LEN);
    }
    
    if (longest_len > 0)
    {
        printf("The longest line was %d characters long:\n", longest_len);
        int c, i;
        
        for (i = 0; i < MAX_LEN && longest[i] != '\0'; i++)
            printf("%c", longest[i]);
    }

    return 0;
}

/*
* Loads the next line of the input stream into the input array
* Returns - Length of the line
*/
int get_line(char input[], int limit)
{
    int c, i;

    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        input[i] = c;
    }
    if (c == '\n')
    {
        input[i] = c;
        i++;
    }

    input[i] = '\0';

    return i;
}

/*
* Copies the contents of input into output
*/
void copy(char input[], char output[])
{
   int i;

   i = 0;
   while ((output[i] = input[i]) != '\0')
       i++;
}
