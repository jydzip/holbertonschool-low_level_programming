#include "main.h"

/**
 * print_sign - Get and print the sign of a number
 * @c: The character to check
 *
 * Return: (int) 1 = >0 ~ 0 = 0 ~ -1 = <0
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
