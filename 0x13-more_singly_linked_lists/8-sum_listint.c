#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 * @head: pointer to first node
 * Return: 0 if the list is empty. Otherwise
 * sum of data (n)
 */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head != NULL; head = head->next)
		sum += head->n;

	return (sum);
}
