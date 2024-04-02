#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Insert a new node at given index
 * @h: List
 * @idx: Index to add new node
 * @n: New node value n
 * Return: Adress new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *node = *h;
	dlistint_t *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (node != NULL && i < idx - 1)
	{
		node = node->next;
		i++;
	}

	if (node == NULL || node->next == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = node;
	new_node->next = node->next;

	node->next->prev = new_node;
	node->next = new_node;
	return (new_node);
}
