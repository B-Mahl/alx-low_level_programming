#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int b;
	int i;

	if (n == 0)
	{
		_putchar(48);
		return;
	}
	b = n;
	for (i = 0; n != 0; n = n >> 1, i++)
		;
	for (i -= 1; i >= 0; i--)
		_putchar(48 + ((b >> i) & 1));
}
