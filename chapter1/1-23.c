// 1-23: Write a program to remove all comments from a C program.

#include <stdio.h>

#define MAX_LEN 1000

int get_line(char buffer[], int max);
void trim_comments(char line[]);
void print_line(char line[]);

int main()
{
	char buffer[MAX_LEN];

	int len;
	while ((len = get_line(buffer, MAX_LEN)) > -1)
	{
		trim_comments(buffer);
		print_line(buffer);
		putchar('\n');
	}

	return 0;
}

// Loads next line of input into `buffer`
int get_line(char buffer[], int max)
{
	int c, i;

	c = getchar();
	if (c == EOF)
		return -1;

	for (i = 0; i < max-1 && c != EOF && c != '\n'; i++)
	{
		buffer[i] = c;
		c = getchar();
	}

	buffer[i] = '\0';

	return i;
}

// Trims all '//' commends from `line[]`
void trim_comments(char line[])
{
	int i;
	for (i = 0; line[i] != '\0'; i++)
	{
		if (line[i] == '/' && line[i+1] == '/')
		{
			line[i] = '\0';
			return;
		}
	}
}

// Prints `line[]`
void print_line(char line[])
{
	int i;
	for (i = 0; line[i] != '\0'; i++)
	{
		putchar(line[i]);
	}
}
