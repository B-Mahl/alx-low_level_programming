#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * or if b in NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int size = 0;
	int buffer[50];
	int i;
	unsigned int j = 1;
	unsigned int converted = 0;

	if (b == NULL)
		return (0);
	while (*b && size < 50)
	{
		if (*b != '0' && *b != '1')
			return (0);

		buffer[size] = *b - '0';
		size++;
		b++;
	}
	for (i = size - 1; i >= 0; i--)
	{
		converted += buffer[i] * j;
		j *= 2;
	}
	return (converted);
}
