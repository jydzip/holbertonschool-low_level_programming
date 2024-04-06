#include "main.h"

/**
 * set_bit - Set the value of a bit to 1 at given index
 * @n: Number
 * @index: Index
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n |= (1 << index);
	return (1);
}
