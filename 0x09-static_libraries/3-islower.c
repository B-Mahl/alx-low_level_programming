#include "main.h"
/**
 * _islower - compares characters
 *
 * @c: character to compare
 * Return: Boolean
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

