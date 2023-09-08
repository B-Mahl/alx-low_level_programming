#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: If new_size is equal to zero, and ptr is not NULL then return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memry;
	char *copy, *filler;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		memry = malloc(new_size);

		if (memry == NULL)
			return (NULL);

		return (memry);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	copy = ptr;
	memry = malloc(sizeof(*copy) * new_size);

	if (memry == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filler = memry;

	for (index = 0; index < old_size && index < new_size; index++)
		filler[index] = *copy++;

	free(ptr);
	return (memry);
}
