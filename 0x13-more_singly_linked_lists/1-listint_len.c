#include "lists.h"

/**
 * listint_len - returns number of nodes in a linked list
 * @h: pointer to linked list head
 * Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
