#include "main.h"
/**
 * _puts_recursion - recursive function
 *  @*s: value at address
 *  @s: stores address in memory
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
