// 3-2: Write a function escape(s,t) that converts characters like newline and tab into
// visible escape sequences like \n and \t as it copies the string t to s. Use a switch. Write a
// function for the other direction as well, converting escape sequences into the real characters
#include <stdio.h>

void escape(char s[], char t[]);

int main()
{
	char s[1000];
	int c, i;
	i = 0;
	while ((c = getchar()) != EOF)
		s[i++] = c;

	char t[1000];
	escape(s, t);

	printf("%s\n", t);

	return 0;
}

// Converts escape characters, such as '\n', into their literal string versions from `s` into `t`.
void escape(char s[], char t[])
{
	int i, j;
	for (i = 0, j = 0; s[i] != '\0'; i++, j++)
	{
		switch (s[i]) 
		{
			// note: im not doing all possible escapes, sorry
			case '\n':
				t[j++] = '\\';
				t[j] = 'n';
				break;
			case '\t':
				t[j++] = '\\';
				t[j] = 't';
				break;
			default:
				t[j] = s[i];
				break;
		}
	}

	t[j] = '\0';
}
