#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 * Return: NULL if failed, poiinter if successful
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len;
	unsigned int s2_len;
	char *ptr;
	unsigned int i;

	s1_len = 0;
	s2_len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len] != '\0')
		s1_len++;

	while (s2[s2_len] != '\0')
		s2_len++;

	if (n >= s2_len)
		n = s2_len;

	ptr = malloc(sizeof(char) * (s1_len + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		ptr[i] = s1[i];

	for (i = 0; i < n; i++)
		ptr[i + s1_len] = s2[i];
	
	ptr[s1_len + i] = '\0';
	return (ptr);
}

