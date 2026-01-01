// 2-3: Write a function htoi(s), which converts a string of hexadecimal digits
//		(including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0
//		through 9, a through f, and A through F.
#include <stdio.h>

int htoi(char s[]);
int hctoi(char c);

int main()
{
	char hex[1000];
	int c, i;
	i = 0;
	while ((c = getchar()) != EOF)
	{
		hex[i++] = c;
	}

	int base10 = htoi(hex);
	printf("%d\n", base10);

	return 0;
}

// Converts a hexadecimal string to an integer
int htoi(char s[])
{
	char c;
	int i = 0;
	int res = 0;

	// ignore the optional 0x or 0X at the beginning
	if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
	{
		i = 2;
	}

	while ((c = s[i]) != '\0')
	{
		int hctoi_res;
		if (c >= '0' && c <= '9')
		{
			// do number stuff
			res = 16 * res + (c - '0');
		}
		else if ((hctoi_res = hctoi(c)) > 0)
		{
			res = 16 * res + hctoi_res;
		}

		i++;
	}

	return res;
}

// Converts hex character to its corresponding integer.
// Expects only A-F characters (case insensitive).
int hctoi(char c)
{
	if (c >= 'a' && c <= 'f')
		return c - 'a' + 10;
	else if (c >= 'A' && c <= 'F')
		return c - 'A' + 10;
	else
	{
		return 0;
	}
}
