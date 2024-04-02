#include "lists.h"

/**
 * dlistint_len - Return number of elements in dlistint_t
 * @h: Pointer list
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *node = h;

	while (node != NULL)
	{
		node = node->next;
		count++;
	}
	return (count);
}
