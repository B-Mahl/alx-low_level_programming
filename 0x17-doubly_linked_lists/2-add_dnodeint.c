#include "lists.h"

/**
 * add_dnodeint - adds new node at beginning of a doubly list
 * @head: pointer to head pointer
 * @n: data value
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (*head == NULL)
		return (NULL);

	if (new_node == NULL)
	{
		printf("Memory allocation failed");
		return (NULL);
	}
	new_node->next = *head;
	new_node->n = n;
	new_node->prev = NULL;

	*head = new_node;

	return (new_node);
}
