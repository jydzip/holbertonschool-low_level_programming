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

	_putchar('0' + last_digit);
	return (last_digit);
}