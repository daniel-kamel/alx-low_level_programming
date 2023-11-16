#include "lists.h"

/**
 * print_list - prints linked list
 * @h: pointer to list head
 * Return: number of nodes in the list
*/
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str)
			printf("[%lu] %s\n", strlen(h->str), h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
		nodes++;
	}

	return (nodes);
}
