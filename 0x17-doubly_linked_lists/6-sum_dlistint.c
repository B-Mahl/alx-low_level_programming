#include "lists.h"

/**
 * sum_dlistint - returns sum of all data (n) of doubly linked list
 * @head: pointer to head node
 * Return: 0 if list is empty and sum of data if not
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	if (head == NULL)
		return (0);

	current = head;
	while (current != NULL)
	{
		sum = sum + (current->n);
		current = current->next;
	}
	return (sum);
}
