#include "lists.h"

/**
 * get_dnodeint_at_index - Return nth node of dlistint_t
 * @head: List
 * @index: Index of node
 * Return: Node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node = head;

	while (node != NULL)
	{
		if (i == index)
			break;
		node = node->next;
		i++;
	}
	return (node);
}
