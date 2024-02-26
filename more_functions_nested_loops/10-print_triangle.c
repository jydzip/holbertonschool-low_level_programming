#include "main.h"

/**
 * print_triangle - Draw triangle on the terminal
 * @size: size of the square
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, ii;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (ii = 1; ii <= size; ii++)
		{
			if ((size - ii) < i)
			{
				_putchar(35);
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
