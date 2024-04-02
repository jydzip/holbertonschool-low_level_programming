#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a dlistint_t.
 * @head: List
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;
	dlistint_t *node = head;

	while (node != NULL)
	{
		next = node->next;
		free(node);
		node = next;
	}
}
