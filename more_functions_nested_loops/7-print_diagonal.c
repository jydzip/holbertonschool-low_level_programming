#include "main.h"

/**
 * print_diagonal - Draws diagonal line on the terminal
 * @n: nb to draw
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, ii;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (ii = 0; ii < n; ii++)
		{
			if (i == ii)
			{
				_putchar(92);
				break;
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
