#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * _calloc - Allocate memory for an array using malloc
 * @nmemb: Nb of element in array
 * @size: Element bytes
 * Return: Pointer new allocated space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
