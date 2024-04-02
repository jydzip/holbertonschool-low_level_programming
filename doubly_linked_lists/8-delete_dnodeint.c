#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete a node at given index
 * @head: List
 * @index: Index to delete node
 * Return: Result
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node;
	dlistint_t *prev_node;

	if (head == NULL || *head == NULL)
		return (-1);

	node = *head;
	if (index == 0)
	{
		*head = node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(node);
		return (1);
	}
	while (node != NULL && i < index)
	{
		node = node->next;
		i++;
	}
	if (node == NULL)
		return (-1);

	prev_node = node->prev;
	if (prev_node)
		prev_node->next = node->next;

	if (node->next != NULL)
		node->next->prev = prev_node;

	free(node);
	return (1);
}
