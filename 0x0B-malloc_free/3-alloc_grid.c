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
	int *arr_2D;
