#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to linked list head
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	if (!head)
		return;

	while (current)
	{
		current = current->next;

		free(head);

		head = current;
	}

	*head = NULL;
}
