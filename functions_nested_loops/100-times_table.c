#include "main.h"
/**
 * print_times_table - Print the 9 times table, start by 0
 * @n: (int) nb base to loop
 * Return: void
 */
void print_times_table(int n)
{
	int i, ii, nb, a, b, c;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (ii = 0; ii <= n; ii++)
		{
			a = b = c = -2;
			nb = ii * i;
			if (nb > 99)
			{
				a = (int)nb / 100;
				nb = nb % 100;
			}
			if (nb > 9)
			{
				b = (int)nb / 10;
				nb = nb % 10;
			}
			c = nb;
			if (ii > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (a != -2)
				_putchar(a + '0');
			else if (ii > 0)
				_putchar(' ');
			if (b != -2)
				_putchar(b + '0');
			else if (a > 0)
				_putchar('0');
			else if (ii > 0)
				_putchar(' ');
			_putchar(c + '0');
		}
		_putchar('\n');
	}
}
