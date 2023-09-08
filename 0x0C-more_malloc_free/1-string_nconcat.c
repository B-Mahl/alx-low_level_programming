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
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	s1_len = i;

	while (s2[j] != '\0')
		j++;
	s2_len = j;

	ptr = malloc(sizeof(char) * (s1_len + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		ptr[i] = s1[i];

	if (n >= s2_len)
		n = s2_len;

	for (i = 0; i < n; i++)
		ptr[i + s1_len] = s2[i];
	
	ptr[s1_len + n] = '\0';
	return (ptr);
}

