// 2-6: Write a function setbits(x,p,n,y) that returns x with the n bits that begin at
// position p set to the rightmost n bits of y, leaving the other bits unchanged.
#include <stdio.h>

unsigned setbits(unsigned short x, unsigned short p, unsigned short n, unsigned short y);
unsigned short getmask(unsigned short p, unsigned short n, int inverted);

int main()
{
	// 11000101
	unsigned short x = 197;

	// 00111010
	unsigned short y = 58;

	unsigned short n = 4;
	unsigned short p = 3;

	unsigned res = setbits(x, p, n, y);

	// should be 213
	printf("%B, %d\n", res, res);

	return 0;
}

// Sets `n` bits (going left) starting at `p` equal to the right-most `n` bits of `y`.
unsigned setbits(unsigned short x, unsigned short p, unsigned short n, unsigned short y)
{
	// get inverted mask for n, p
	unsigned short x_mask = getmask(p, n, 1);

	// clear n p of x
	x = x & x_mask; 

	// set left-most 8-n bits to 0, or n to 1....
	unsigned short y_mask = getmask(0, n, 0);
	y = y & y_mask;
	y = y << p;

	return (x | y);
}

// Returns a mask of len `n` (going left), starting at position `p`.
// If `inverted` is greater than 0, the mask will be 0's, otherwise the mask will be 1's
// The sum of `n` and `p` must equal 8 or less, and must each be 0 or greater.
// Example: n=3 p=2 i=1 returns 11100011
// Example: n=5 p=0 i=0 returns 00011111
// Example: n=2 p=5 i=0 returns 01100000
unsigned short getmask(unsigned short p, unsigned short n, int inverted)
{
	int i;
	unsigned short mask = 0;
	for (i = 0; i < n; i++)
	{
		mask = mask << 1;

		mask = mask | (unsigned short)1;
	}
	mask = mask << p;

	if (inverted > 0)
		mask = ~mask;

	return mask;
}
