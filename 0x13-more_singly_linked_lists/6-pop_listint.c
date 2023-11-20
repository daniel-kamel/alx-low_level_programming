#include "lists.h"

/**
 * pop_listint - removes the head of a linked list
 * @head: pointer to linked list head
 * Return: data of the head
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (!*head)
		return (0);

	tmp = *head;
	n = tmp->n;
	tmp = tmp->next;
	free(*head);
	*head = tmp;

	return (n);
}
