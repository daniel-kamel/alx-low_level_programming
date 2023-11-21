#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index
 * @head: pointer to linked list head
 * @index: index to delete node from
 * Return: 1 if successfull or -1 if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *to_delete;

	if (!head || !*head)
		return (-1);

	current = *head;

	if (index == 0)
	{
		current = current->next;
		free(*head);
		*head = current;
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (!current->next)
			return (-1);

		current = current->next;
	}

	to_delete = current->next;
	current->next = to_delete->next;
	free(to_delete);

	return (1);
}
