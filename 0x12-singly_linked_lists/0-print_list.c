#include "lists.h"

/**
 * print_list - prints linked list
 * @h: pointer to list head
 * Return: number of nodes in the list
*/
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	if (!h)
		exit(-1);

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		nodes++;
		h = h->next;
	}

	return (nodes);
}
