#include "lists.h"

/**
 * add_node_end - adds new node to the end of a linked list
 * @head: address of list head
 * @str: str element of the new list
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current = *head;
	list_t *new = malloc(sizeof(list_t));

	if (!head || !new)
		return (NULL);

	if (str)
	{
		new->str = strdup(str);
		if (!new->str)
		{
			free(new);
			return (NULL);
		}
		new->len = strlen(new->str);
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
