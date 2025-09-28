#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - delete node at index in doubly linked list
 * @head: pointer to head pointer
 * @index: index of node to delete (0-based)
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	node = *head;

	if (index == 0)
	{
		*head = node->next;
		if (*head)
			(*head)->prev = NULL;
		free(node);
		return (1);
	}

	for (i = 0; node && i < index; i++)
		node = node->next;

	if (!node)
		return (-1);

	if (node->prev)
		node->prev->next = node->next;
	if (node->next)
		node->next->prev = node->prev;

	free(node);
	return (1);
}
