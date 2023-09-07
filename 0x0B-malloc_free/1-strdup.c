#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string
 *	which is a duplicate of another string
 * @str: string to duplicate
 *
 * Return:: NULL if str = NULL, NULL if isufficient
 *	memory and a pointer to copy of str if ok
 */
char *_strdup(char *str)
{
	char *ptr;
	int size;
	int i;
	int j;

	i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	size = i;

	ptr = malloc(sizeof(char) * size + 1);
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		ptr[j] = str[j];

	return (ptr);
}

