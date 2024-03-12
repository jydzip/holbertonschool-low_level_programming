#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocate memory using malloc
 * @b: Bytes
 * Return: Pointer
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
