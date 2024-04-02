#include "lists.h"
#include <stdio.h>

/**
 * list_len - Return number of elements in list_t
 * @h: List
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		count++;
		node = node->next;
	}
	return (count);
}
