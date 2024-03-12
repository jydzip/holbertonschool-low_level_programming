#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocate memory for an array using malloc
 * @nmemb: Nb of element in array
 * @size: Element bytes
 * Return: Pointer new allocated space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc((nmemb + 1) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb + 1; i++)
	{
		((char *)ptr)[i] = 0;
	}
	return (ptr);
}
