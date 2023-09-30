#include "main.h"
/**
 * clear_bit -  sets the value of a bit to 0 at a given index
 * @n: pointer to an int
 * @index: index, starting from 0 of the bit you want to set
 * Return: 1 if worked, else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	*n = ~(1 << index) & *n;

	return (1);
}
