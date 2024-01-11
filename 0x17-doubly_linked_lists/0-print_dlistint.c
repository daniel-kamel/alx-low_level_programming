#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: head of the list
 * Return: number of nodes of the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%i\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
