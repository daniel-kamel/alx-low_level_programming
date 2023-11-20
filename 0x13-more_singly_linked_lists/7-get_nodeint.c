#include "lists.h"

/**
 * get_nodeint_at_index - gets the node at index
 * @head: pointer to linked list head
 * @index: index to get the node at
 * Return: node at index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int n = 0;

	if (!head)
		return (NULL);

	current = head;

	while (current)
	{
		if (n == index)
			return (current);
		n++;
		current = current->next;
	}

	return (current);
}
