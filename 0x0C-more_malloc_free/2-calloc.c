#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in array
 * @size: size in bytes of each element
 * Return: Pointer if successful if nmemb or size is 0, then NULL
 *		if malloc fails, then NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int k;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);
	for (k = 0; k < nmemb * size; k++)
		arr[k] = 0;

	return (arr);
}
