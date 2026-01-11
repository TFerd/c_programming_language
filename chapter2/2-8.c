// 2-8: Write a function rightrot(x,n) that returns the value of the integer x rotated
// to the right by n positions.
#include <stdio.h>

unsigned int rightrot(unsigned int x, unsigned int n);

int main()
{
	unsigned int x = 49;
	printf("x: %B | result: %B\n", x, rightrot(x, 3));

	return 0;
}

// Rotates the bits of `x` to the right by `n`.
// Rotating means when a bit gets to the rightmost end, 
// it loops back around to the leftmost end.
unsigned int rightrot(unsigned int x, unsigned int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (x & 1)
		{
			x = ~(~x >> 1);
		}
		else 
		{
			x = x >> 1;
		}
	}

	return x;
}
