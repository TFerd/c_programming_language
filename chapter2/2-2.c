// 2-2: Write a loop equivalent to the for loop above without using && or ||.
//  for (i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
//		s[i] = c;
#include <stdio.h>

#define MAX 1000

int main()
{
	char s[MAX];
	int c;
	int i = 0;
	while ((c = getchar()))
	{
		if (c == EOF)
			break;
		else if (c == '\n')
			break;
		else if (i >= MAX-1)
			break;
		else
			s[i] = c;

		i++;
	}

	return 0;
}
