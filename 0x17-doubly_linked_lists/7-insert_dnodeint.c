#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: pointer to head pointer
 * @idx: index of the list where the new node should be added
 * @n: data field variable
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	
	if (new_node == NULL)
		return (NULL);

