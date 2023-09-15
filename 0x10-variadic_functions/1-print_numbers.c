#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers -prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pa;

	va_start(pa, n);

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
			printf("%d", va_arg(pa, int));
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(pa, int));
			if (i < n - 1)
				printf("%s", separator);
		}
		printf("\n");
	}
	va_end(pa);
}

