#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;
	char *s;

	va_start(pa, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(pa, char *);
		if (separator != NULL && i > 0)
			printf("%s", separator);
		if (pa == NULL)
			printf(("nil"));
		else
			printf("%s", s);
	}
	va_end(pa);
	printf("\n");
}

