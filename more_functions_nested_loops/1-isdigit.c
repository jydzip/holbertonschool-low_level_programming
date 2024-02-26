#include "main.h"

/**
 * _isdigit - Checks for a digit (0 through 9)
 * @c: (int) character to check
 *
 * Return: 1 = true, 0 = false
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
