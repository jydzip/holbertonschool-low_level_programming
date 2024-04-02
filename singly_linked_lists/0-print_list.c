#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the element of a list_t.
 * @h: List
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		if (node->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", node->len, node->str);
		node = node->next;
		count++;
	}
	return (count);
}
