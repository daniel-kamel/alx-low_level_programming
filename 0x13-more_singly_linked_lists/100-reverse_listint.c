#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to linked list head
 * Return: pointer to the head of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL, *prev = NULL;

	if (!head || !*head)
		return (NULL);

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
