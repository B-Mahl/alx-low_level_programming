#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: integer to be added to other values
 * Return: if n == 0, return 0. Otherwise return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;

	unsigned int i;
	int sum;

	va_start(p, n);
	if (n == 0)
		return (0);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(p, int);
	va_end(p);
	return (sum);
}

