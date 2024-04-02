#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Print all elements of dlistint_t
 * @h: List
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *node = h;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		count++;
	}
	return (count);
}
