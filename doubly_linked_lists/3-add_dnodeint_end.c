#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Add new node at the end of dlistint_t
 * @head: Pointer list
 * @n: Value for new node
 * Return: adress new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		last_node = *head;

		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
		new_node->prev = last_node;
	}
	return (new_node);
}
