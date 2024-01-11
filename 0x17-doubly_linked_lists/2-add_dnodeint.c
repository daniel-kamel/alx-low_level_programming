#include "lists.h"

/**
 * add_dnodeint - adds a node to a doubly linked list
 * @head: head of the list
 * @n: int to be added to the list
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current, *new_node;

	if (!*head)
	{
		*head = malloc(sizeof(dlistint_t));
		(*head)->n = n;
		(*head)->next = NULL;
		(*head)->prev = NULL;
		return (*head);
	}

	current = *head;

	while (current->prev)
		current = current->prev;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	current->prev = new_node;
	new_node->next = current;
	new_node->prev = NULL;
	*head = new_node;

	return (new_node);
}
