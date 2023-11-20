#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of a list
 * @head: pointer to linked list head
 * @n: int to add
 * Return: address to new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (!head || !new)
		return (NULL);

	if (n)
	{
		new->n = n;
		if (!new->n)
		{
			free(new);
			return (NULL);
		}
	}

	if (current)
	{
		while (current->next)
			current = current->next;
		current->next = new;
	}
	else
		*head = new;

	return (new);
}
