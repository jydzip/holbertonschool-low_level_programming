#include "function_pointers.h"

/**
 * array_iterator - Execute a function given as parameter each element of array
 * @array: Array of element
 * @size: Size of array
 * @action: Function with argument
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
