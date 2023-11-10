#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end of a doubly linked list.
 * @head: pointer to head pointer
 * @n: data value
 * Return: address of new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);

	last_node = malloc(sizeof(dlistint_t));
	if (last_node == NULL)
		return (NULL);

	last_node->next = NULL;
	last_node->n = n;

	if (*head == NULL)
	{
		last_node->prev = NULL;
		*head = last_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = last_node;
		last_node->prev = current;
	}

	return (last_node);
}
