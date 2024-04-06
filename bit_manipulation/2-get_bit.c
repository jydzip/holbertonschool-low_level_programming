#include "main.h"

/**
 * get_bit - Return the value of a bit at given index
 * @n: Number
 * @index: Index
 * Return: Value of bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> index) & 1);
}
