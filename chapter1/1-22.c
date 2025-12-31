// 1-22: Write a program to "fold" long input lines into
// two or more shorter lines after the last non-blank char
// that occurs before the n-th column of input. Make sure your
// program does something intelligent with very long lines, and
// if there are no blanks or tabs before the specified column.

#include <stdio.h>

#define FOLD_N 30
#define MAX 1000

int get_line(char buffer[], int max);
void print_line(char line[], int fold_n);

int main()
{
	int line;
	char buffer[MAX];

	while ((line = get_line(buffer, MAX)) > 0)
	{
		print_line(buffer, FOLD_N);
		printf("\n");
	}

	return 0;
}

// Loads line into `buffer` up to `max`.
int get_line(char buffer[], int max)
{
	int i, c;

	for (i = 0; i < max-1 && (c = getchar()) != '\n' && c != EOF; i++)
	{
		buffer[i] = c;
	}
	buffer[i] = '\0';
	
	return i;
}

// Prints the input `line` and "folds" into a new line at `fold_n`. `current_i` is the
// current character the printer is at.
void print_line(char line[], int fold_n)
{
	// i current iterator, n number to print
	int i, n;
	for (i = 0, n = 0; line[i] != '\0'; i++, n++)
	{
		if (n >= fold_n)
		{
			putchar('\n');
			n = 0;
		}

		putchar(line[i]);
	}
}
