// 2-4: Write an alternative version of squeeze(s1,s2) that deletes 
// each character in s1 that matches any character in the string s2.

#include <stdio.h>
#include <limits.h>

void squeeze(char s1[], char s2[]);
void print(char s[]);

int main()
{
	char s1[] = "hellozxworld";
	char s2[] = "zx";

	printf("s1: ");
	print(s1);
	printf("\n");
	printf("s2: ");
	print(s2);

	squeeze(s1, s2);

	printf("\ns1: ");
	print(s1);

	return 0;
}

// Removes any occurences of any chars in `s2` from `s1` 
void squeeze(char s1[], char s2[])
{
	int lookup[CHAR_MAX+1];
	int i;
	for (i = 0; i < CHAR_MAX + 1; i++)
	{
		lookup[i] = 0;
	}

	// load lookup with s2 chars
	char c;
	i = 0;
	while ((c = s2[i++]) != '\0')
	{
		lookup[(int)c]++;
	}

	int j = i = 0;
	while ((c = s1[j]) != '\0')
	{
		if (lookup[(int)c] == 0)
		{
			s1[i++] = c;
		}

		j++;
	}

	s1[i] = '\0';
}

void print(char s[])
{
	char c;
	int i;
	for (i = 0; (c = s[i]) != '\0'; i++)
		printf("%c", c);
}
