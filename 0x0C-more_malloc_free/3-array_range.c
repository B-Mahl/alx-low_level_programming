#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum value in array
 * @max: maximum value in array
 * Return: pointer to the new array
 *	if min > max, return NULL
 *	if malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *arr;
	int size;
	int i;

	size = (max - min) + 1;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
