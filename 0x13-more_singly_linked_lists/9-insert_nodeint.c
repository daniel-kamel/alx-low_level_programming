#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at index
 * @head: pointer to linked list head
 * @idx: index to insert new node to
 * @n: n of the new node
 * Return: address of new node or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int curr_idx = 0;
	listint_t *current, *new = malloc(sizeof(listint_t));

	if (!*head || !new)
		return (NULL);

	current = *head;
	new->n = n;

	if (idx == 0)
	{
		new->next = current;
		return (new);
	}

	while (current->next)
	{
		curr_idx++;
		if (curr_idx == idx)
		{
			new->next = current->next;
			current->next = new;
			return (new);
		}
		current = current->next;
	}

	return (NULL);
}
