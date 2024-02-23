#include "main.h"

/**
 * print_last_digit - Retrieve last digit of a number
 * @c: The number
 *
 * Return: (int) last digit
 */
int print_last_digit(int c)
{
	int abs_c = c * ((c > 0) - (c < 0));
	int last_digit = abs_c % 10;

	char result = last_digit + '0';
	if (c <= 0 && c >= 9)
	{
		_putchar(c);
		return (c);
	}
	return (last_digit);
}
