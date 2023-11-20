#include "lists.h"

/**
 * sum_listint - sums all list data
 * @head: pointer to linked list head
 * Return: sum of list data
*/
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (!head)
		return (sum);

	current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
