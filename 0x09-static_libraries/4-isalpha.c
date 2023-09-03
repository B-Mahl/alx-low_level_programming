#include "main.h"
/**
 * _isalpha - checks whether a given character c is an alphabetic character or not
 *
 * @c: character to check
 *
 * Return: boolean
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
