#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - oncatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure, pointer if successful
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	int s1_length;
	int s2_length;
	int i;
	int j;
	int k;

	i = 0;
	j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	s1_length = i;

	while (s2[j] != '\0')
		j++;
	s2_length = j;

	conc = malloc(sizeof(char) * (s1_length + s2_length + 1));
	if (conc == NULL)
		return (NULL);

	for (k = 0; k < s1_length; k++)
	{
		conc[k] = s1[k];
	}

	for (k = 0; k < s2_length; k++)
	{
		conc[k + s1_length] = s2[k];
	}
	conc[k + s1_length] = '\0';

	return (conc);
}

