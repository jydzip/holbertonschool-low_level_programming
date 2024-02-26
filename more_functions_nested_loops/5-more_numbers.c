#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, ii;

	for (ii = 0; ii < 10; ii++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i < 10)
			{
				_putchar(i + '0');
			}
			else
			{
				_putchar(((int)i / 10) + '0');
				_putchar((i % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
