#include "main.h"
/**
 * _strstr -  locate a substring within a given string
 * @s: string to locate
 * @sub: substring to locate
 * Return: returns string at starting substring or null
 */
char *_strstr(char *s, char *sub)
{
	int i;
	int j;

	if (sub[0] == '\0')
		return (s);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == sub[0])
		{
			for (j = 0; sub[j] != '\0'; j++)
			{
				if (s[i + j] != sub[j])
					break;
			}
			if (sub[j] == '\0')
				return (s + i);
		}

	}
	return ('\0');
}
