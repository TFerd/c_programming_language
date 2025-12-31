// 2-1: Write a program to determine the ranges of char, short, int, and long
// variables, both signed and unsigned, by printing appropriate values from standard headers
// and by direct computation. Harder if you compute them: determine the ranges of the various
// floating-point types.

#include <stdio.h>
#include <limits.h>
#include <float.h>

void compute_unsigned_short_minmax();

int main()
{
	compute_unsigned_short_minmax();

	return 0;
}

void compute_unsigned_short_minmax()
{
	short unsigned int su_i = 0;
	short unsigned int su_j = 0;

	while ((su_j = su_i + 1) > su_i)
	{
		su_i++;
	}
	printf("Computed short unsigned int maximum is: %d\n", su_i);

	su_i = su_j = 0;

	while ((su_j = su_i - 1) < su_i)
	{
		su_i--;
	}
	printf("Computed short unsigned int minimum is: %d\n", su_i);
}

void compute_signed_short_minmax()
{

}
