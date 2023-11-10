#include "lists.h"

/**
 * add_dnodeint - adds new node at beginning of a doubly list
 * @head: pointer to head pointer
 * @n: data value
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	new_node->n = n;
	new_node->prev = NULL;

	if (*head)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
