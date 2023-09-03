#include "main.h"
/**
 * _isupper - checks uppercase
 * @c: character to be checked
 *
 * Return: Boolean
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
