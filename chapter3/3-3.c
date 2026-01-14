// 3-3: Write a function expand(s1,s2) that expands shorthand notations like a-z in
// the string s1 into the equivalent complete list abc...xyz in s2. Allow for letters of either case
// and digits, and be prepared to handle cases like a-b-c and a-z0-9 and -a-z. Arrange that a
// leading or trailing - is taken literally.
#include <stdio.h>

void expand(char s1[], char s2[]);

int main()
{
	char s1[] = "a-d894tu983";
	char s2[1000];
	expand(s1, s2);

	printf("%s\n", s2);
	return 0;
}

// "Expands" the contents of `s1` into `s2`. Expands shorthand notations such as 'a-z' into abc...xyz.
void expand(char s1[], char s2[])
{

	// when u have a-z, only do abc...xy, dont put z, let the next loop do z
	int i, j;
	char c;
	i = j = 0;

	while ((c = s1[i]) != '\0')
	{
		if ((c >= '0' && c <= '9') && s1[i+1] == '-' && ((s1[i+2] >= '0' && s1[i+2] <= '9')))
		{
			char curr = c;
			char target = s1[i+2];
			while (curr != target)
			{
				s2[j++] = curr++;
			}

			s2[j++] = curr++;
			i += 2;

		}
		else if ((c >= 'a' && c <= 'z') && s1[i+1] == '-' && (s1[i+2] >= 'a' && s1[i+2] <= 'z'))
		{
			char curr = c;
			char target = s1[i+2];
			while (curr != target)
			{
				s2[j++] = curr++;
			}

			s2[j++] = curr++;
			i += 2;
		}
		else if ((c >= 'A' && c <= 'Z') && s1[i+1] == '-' && (s1[i+2] >= 'A' && s1[i+2] <= 'Z'))
		{
			char curr = c;
			char target = s1[i+2];
			while (curr != target)
			{
				s2[j++] = curr++;
			}

			s2[j++] = curr++;
			i += 2;
		}
		else
		{
			s2[j++] = c;
		}

		i++;
	}
}

