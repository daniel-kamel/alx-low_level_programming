#include "lists.h"

/**
 * free_list - frees list memory
 * @head: address of list head
 * Return: void
*/
void free_list(list_t *head)
{
	list_t *current = head;

	if (!head)
		exit(-1);

	while (current)
	{
		current = current->next;

		free(head->str);
		free(head);

		head = current;
	}
}
