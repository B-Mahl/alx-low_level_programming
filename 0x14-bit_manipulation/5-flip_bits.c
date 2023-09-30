#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 * @n: integer value
 * @m: integer value
 * Return: nubmer of bits n have to flip to equal m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k = 0;
	int flips;

	for (flips = k; k < 64; k++, flips++)
		if (((n >> k) & 1) == ((m >> k) & 1))
			flips--;
	return (flips);
}
