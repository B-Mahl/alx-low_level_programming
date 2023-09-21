#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to head of the list
 * @str: string to duplicate
 * Return: address of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	list_t *new_node;
	int len = 0;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(dup);
		return (NULL);
	}
	while (*dup != '\0')
		len++;

	new_node->str = dup;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

