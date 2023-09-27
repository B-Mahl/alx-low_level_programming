#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to head pointer
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data_n;

	if (head == NULL)
		return (0);
	temp = (*head)->next;
	data_n = (*head)->n;
	free(*head);
	*head = temp;

	return (data_n);
}

