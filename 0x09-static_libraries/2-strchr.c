#include "main.h"
/**
 * _strchr - locates character in string
 * @s: string to search
 * @c: character to locate
 * Return: character value
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
