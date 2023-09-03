#include "main.h"
#include <stdio.h>
/**
 * _strspn - length of the initial segment of a string that consists of only the characters contained in another string
 * @s: string to iterate over
 * @accept: bytes accepted
 * Return: length of initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
				break;
			}
		}
		if (s[j] == '\0')
			return (length);
	}
	return (length);
}
