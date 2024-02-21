#include "main.h"

/**
 * _islower - Check if arg is lowercase
 * @c: The character to check
 *
 * Return: (int) 1 = true ~ 0 = false
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
