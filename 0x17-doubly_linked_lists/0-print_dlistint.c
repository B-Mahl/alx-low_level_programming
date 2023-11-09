#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to head node
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *current;

	if (h == NULL)
		return (0);
	current = h;
	while (current != NULL)
	{
		printf("%d", current->n;)
		current = current->next;
		count++;
	}

	return (count);
}
