#include "lists.h"

/**
 * sum_dlistint - Return sum of all n of dlistint_t
 * @head: List
 * Return: Count
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node = head;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
