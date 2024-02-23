#include "main.h"

/**
 * print_last_digit - Retrieve last digit of a number
 * @c: The number
 *
 * Return: (int) last digit
 */
int print_last_digit(int c)
{
	int cc = (int)c;
	int abs_c = cc * ((cc > 0) - (cc < 0));
	int last_digit = abs_c % 10;	

	_putchar(-last_digit + '0');
	return (last_digit);
}
