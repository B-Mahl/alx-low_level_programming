#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: input int from which bit will be extracted
 * @index: index, starting from 0 of the bit you want to get
 * Return: value of the bit at index or -1 if failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 32)
		return (-1);
	return ((n >> index) & 1);
}
