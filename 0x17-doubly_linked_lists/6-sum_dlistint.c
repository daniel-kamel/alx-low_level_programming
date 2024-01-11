#include "lists.h"

/**
 * sum_dlistint - sums a doubly linked list
 * @head: head of the list
 * Return: sum of the list or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
		sum += i->n;

	return (sum);
}
