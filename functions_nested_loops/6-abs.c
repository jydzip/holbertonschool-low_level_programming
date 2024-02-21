#include "main.h"

/**
 * _abs - Convert integer to absolute value
 * @c: The character to convert
 *
 * Return: (int) result absolute
 */
int _abs(int c)
{
	return (c * ((c > 0) - (c < 0)));
}
