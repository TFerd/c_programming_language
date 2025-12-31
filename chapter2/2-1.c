// 2-1: Write a program to determine the ranges of char, short, int, and long
// variables, both signed and unsigned, by printing appropriate values from standard headers
// and by direct computation. Harder if you compute them: determine the ranges of the various
// floating-point types.
#include <stdio.h>
#include <limits.h>
#include <float.h>

void compute_signed_char_minmax();
void compute_unsigned_char_minmax();
void compute_unsigned_short_minmax();
void compute_signed_short_minmax();
void print_header_minmaxs();
void compute_signed_int_minmax();
void compute_unsigned_int_minmax();
void compute_unsigned_long_minmax();
void compute_signed_long_minmax();

int main()
{
	printf("The min/max from the limits header file:\n");
	print_header_minmaxs();
	printf("\n");

	compute_signed_char_minmax();
	compute_unsigned_char_minmax();
	compute_unsigned_short_minmax();
	compute_signed_short_minmax();
	compute_signed_int_minmax();
	compute_unsigned_int_minmax();
	compute_unsigned_long_minmax();
	compute_signed_long_minmax();

	return 0;
}

void compute_unsigned_char_minmax()
{
	unsigned char uc_i = 0;
	unsigned char uc_j = 0;
	while ((uc_j = uc_i - 1) < uc_i)
		uc_i--;
	printf("Computed uChar min is %u\n", uc_i);

	uc_i = uc_j = 0;
	while ((uc_j = uc_i + 1) > uc_i)
		uc_i++;
	printf("Computed uChar max is %u\n", uc_i);
}

void compute_signed_char_minmax()
{
	char c_i = 0;
	char c_j = 0;
	while ((c_j = c_i - 1) < c_i)
		c_i--;
	printf("Computed Char min is %d\n", c_i);

	c_i = c_j = 0;
	while ((c_j = c_i + 1) > c_i)
		c_i++;
	printf("Computed Char max is %d\n", c_i);

}

void compute_unsigned_short_minmax()
{
	short unsigned int su_i = 0;
	short unsigned int su_j = 0;

	while ((su_j = su_i + 1) > su_i)
	{
		su_i++;
	}
	printf("Computed short unsigned int maximum is: %u\n", su_i);

	su_i = su_j = 0;

	while ((su_j = su_i - 1) < su_i)
	{
		su_i--;
	}
	printf("Computed short unsigned int minimum is: %u\n", su_i);
}

void compute_signed_short_minmax()
{
	short signed int s_i = 0;
	short signed int s_j = 0;

	while ((s_j = s_i + 1) > s_i)
	{
		s_i++;
	}
	printf("Computed short signed int maximum is: %d\n", s_i);

	s_i = s_j = 0;

	while ((s_j = s_i - 1) < s_i)
	{
		s_i--;
	}
	printf("Computed short signed int minimum is: %d\n", s_i);
}

void compute_signed_int_minmax()
{
	int i = 0;
	int j = 0;
	while ((j = i + 1) > i)
		i++;
	printf("Computed signed int max is: %d\n", i);

	i = j = 0;
	while ((j = i-1) < i)
		i--;
	printf("Computed signed int min is: %d\n", i);
}

void compute_unsigned_int_minmax()
{
	unsigned int ui = 0;
	unsigned int uj = 0;
	while ((uj = ui - 1) < ui)
		ui--;
	printf("Computed unsigned int min is: %u\n", ui);

	ui = uj = 0;
	while ((uj = ui + 1) > ui)
		ui++;
	printf("Computed unsigned int max is: %u\n", ui);
}

void compute_unsigned_long_minmax()
{
	unsigned long int ul_i = 0;
	unsigned long int ul_j = 0;
	
	while ((ul_j = ul_i - 1) < ul_i)
		ul_i--;
	printf("Computed unsigned long min is: %lu\n", ul_i);

	ul_i = ul_j = 0;
	while ((ul_j = ul_i + 1) > ul_i)
		ul_i++;
	printf("Computed unsigned long max is: %lu\n", ul_i);
}

void compute_signed_long_minmax()
{
	signed long int li = 0;
	signed long int lj = 0;

	while ((lj = li - 1) < li)
		li--;
	printf("Computed signed long min is: %li\n", li);

	li = lj = 0;
	while ((lj = li + 1) > li)
		li++;
	printf("Computed signed long max is: %li\n", li);
}

// Prints min/max of char, short, int, and long, both signed and unsigned
void print_header_minmaxs()
{
	printf("Char min: %d\nChar max: %d\n", CHAR_MIN, CHAR_MAX);
	printf("uChar min: %d\nuChar max: %u\n", 0, UCHAR_MAX);

	printf("Short min: %d\nShort max: %d\n", SHRT_MIN, SHRT_MAX);
	printf("uShort min: %d\nuShort max: %u\n", 0, USHRT_MAX);

	printf("Int min: %d\nInt max: %d\n", INT_MIN, INT_MAX);
	printf("uInt min: %d\nuInt max: %u\n", 0, UINT_MAX);

	printf("Long min: %ld\nLong max: %ld\n", LONG_MIN, LONG_MAX);
	printf("uLong min: %d\nuLong max: %lu\n", 0, ULONG_MAX);
}
