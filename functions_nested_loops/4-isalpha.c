#include "main.h"

/**
 * _isalpha - Check if arg is a letter
 * @c: The character to check
 *
 * Return: (int) 1 = true ~ 0 = false
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
