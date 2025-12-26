// Write a program 'detab' that replaces tabs in the input with the proper number
// of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every 'n' 
// columns.
//
// I have no idea what this means
// It means line up the beginnings of words on the "tab-stop" if there is a tab before it.
// Or just add spaces so the next char begins on the tab-stop
#include <stdio.h>

#define TAB_STOP 6

int main()
{
	int c;
	int counter;

	counter = 1;
	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
		{
			while (counter < TAB_STOP)
			{
				putchar(' ');
				counter++;
			}
		}
		else if (c == '\n')
		{	
			putchar(c);
			counter = 1;
		}
		else
		{
			putchar(c);
			counter++;
		}

		if (counter > TAB_STOP)
			counter = 1;
	}

	return 0;
}
