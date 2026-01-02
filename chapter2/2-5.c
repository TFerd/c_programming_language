// 2-5: Write the function any(s1,s2), which returns the first location in a string s1
// where any character from the string s2 occurs, or -1 if s1 contains no characters from s2.

#include <stdio.h>
#include <limits.h>

int any(char s1[], char s2[]);

int main()
{
	char s1[] = "abcd12345";
	char s2[] = "5";
	char s3[] = "efg";

	printf("1: %d, 2: %d\n", any(s1, s2), any(s1, s3));

	return 0;
}

// Returns the first location in `s1` where any char from `s2` occurs, or -1 if none exist.
int any(char s1[], char s2[])
{
	int lookup[CHAR_MAX+1];
	int i;
	for (i = 0; i < CHAR_MAX + 1; i++)
	{
		lookup[i] = 0;
	}

	// Load lookup with s2 chars
	char c;
	i = 0;
	while ((c = s2[i++]) != '\0')
		lookup[(int)c]++;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (lookup[(int)s1[i]] > 0)
			return i;
	}

	return -1;
}
