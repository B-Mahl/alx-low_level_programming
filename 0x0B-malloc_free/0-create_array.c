#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 *		and initializes it with a specific char
 * @size: size of array
 * @c: character to initialize array
 *
 * Return: NULL if size = 0; ptr to array if memory allocated, else NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int j;

	if (size == 0)
		return (NULL);
	if (malloc(sizeof(char) * size) != NULL)
	{
		arr = malloc(sizeof(char) * size);
		for (j = 0; j < size; j++)
			arr[j] = c;
	}
	else
		return (NULL);

	return (arr);
}

