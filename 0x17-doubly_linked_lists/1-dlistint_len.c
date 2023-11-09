#include "lists.h"

/**
 * dlistint_len - returns number of elements in linked list
 * @h: pointer to head node
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *current;

	if (h == NULL)
		return (0);
	current = h;
	while (current != NULL)
	{
		current = current->next;
		count++;
	}

	return (count);
}
