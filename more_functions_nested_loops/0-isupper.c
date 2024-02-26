#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: (int) character to check
 *
 * Return: 1 = true, 0 = false
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
