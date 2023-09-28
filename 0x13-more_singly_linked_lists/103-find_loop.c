#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to head node
 * Return: address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	while (head != NULL)
	{
		if (head <= head->next)
			return (head);
		head = head->next;
	}
	return (NULL);
}
