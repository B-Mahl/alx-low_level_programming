#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array (columns)
 * @height: height of array (rows)
 * Return: NULL on failure, NULL if width
 *	or height is 0, pointer on success
 */
int **alloc_grid(int width, int height)
{
	int **arr_2D;
	int i;
	int k;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr_2D = malloc(sizeof(int *) * height);
	if (arr_2D == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr_2D[i] = malloc(sizeof(int) * width);
		if (arr_2D[i] == NULL)
		{
			free(arr_2D);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (i = 0; i < width; i++)
			arr_2D[k][i] = 0;
	}

	return (arr_2D);
}

