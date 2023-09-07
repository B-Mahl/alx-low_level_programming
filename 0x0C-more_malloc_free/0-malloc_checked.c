#include <stdlib>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to be passed
 * Return: Pointer to allocated memory
 *	else exit with status 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (pter == NULL)
		exit(98);
	return (ptr);
}

