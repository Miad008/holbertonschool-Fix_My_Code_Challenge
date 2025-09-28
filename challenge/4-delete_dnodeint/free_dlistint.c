#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free a doubly linked list
 * @head: pointer to list head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
