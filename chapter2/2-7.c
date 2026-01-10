// 2-7: Write a function invert(x,p,n) that returns x with the n bits that begin at
// position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.
#include <stdio.h>

unsigned short invert(unsigned short x, unsigned short p, unsigned short n);

int main()
{
	unsigned short x = 255;
	unsigned short result = invert(x, 1, 4);

	printf("X: %B\nResult: %B\n", x, result);
	
	return 0;
}

// Returns `x` with `n` bits beginning at `p` inverted.
// `p` and `n` go from right to left.
unsigned short invert(unsigned short x, unsigned short p, unsigned short n)
{
	unsigned short y = x;
	y = y >> p;
	
	unsigned mask = 0;
	int i;
	for (i = 0; i < n; i++)
	{
		mask = mask << 1;
		mask = mask | 1;
	}

	y = y & mask;

	y = (~y) & mask;
	y = y << p;

	mask = 0;
	for (i = 0; i < n; i++)
	{
		mask = mask << 1;
		mask = mask | 1;
	}
	mask = ~(mask << p);

	x = x & mask;

	return x | y;
}
