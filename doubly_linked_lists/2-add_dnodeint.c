#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds new node at the beginning of dlistint_t
 * @head: Head
 * @n: Number
 * Return: dlistint_t
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;
	return (new_node);
}
