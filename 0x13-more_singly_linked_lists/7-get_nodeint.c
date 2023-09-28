#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list.
 * @head: pointer to head of list
 * @index: index of the node
 * Return: NULL if node does not exist else address of node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL; i++, head = head->next)
		if (i == index)
			return (head);
	return (NULL);
}
