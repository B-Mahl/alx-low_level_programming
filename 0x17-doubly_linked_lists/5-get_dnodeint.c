#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of doubly linked list
 * @head: pointer to first node
 * @index: index of node to return
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);

	current = head;
	while (current != NULL)
	{
		if (index == i)
			return (current);

		current = current->next;
		i++;
	}
	return (NULL);
}
