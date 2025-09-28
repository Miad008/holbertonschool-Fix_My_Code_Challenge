#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add node at end of doubly linked list
 * @head: pointer to head pointer
 * @n: value
 * Return: pointer to new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tail;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (!head || !*head)
	{
		new->prev = NULL;
		if (head)
			*head = new;
		return (new);
	}

	tail = *head;
	while (tail->next)
		tail = tail->next;

	tail->next = new;
	new->prev = tail;

	return (new);
}
