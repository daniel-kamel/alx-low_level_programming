#include "lists.h"

/**
 * add_nodeint - adds a new node to linked list
 * @head: pointer to linked list head
 * @n: new number to add
 * Return: number of nodes
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
