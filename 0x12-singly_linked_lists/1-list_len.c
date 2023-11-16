#include "lists.h"

/**
 * list_len - returns the number of list elements
 * @h: pointer to list head
 * Return: number of nodes in the list
*/
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
