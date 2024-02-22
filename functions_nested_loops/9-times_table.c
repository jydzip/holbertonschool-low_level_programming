#include "main.h"

/**
 * times_table - Print the 9 times table, start by 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, ii, nb;

	for (i = 0; i <= 9; i++)
	{
		for (ii = 0; ii <= 9; ii++)
		{
			int nbDisplay2 = -1;
			int nbDisplay1 = -1;

			nb = ii * i;

			if (i == 0 || ii == 0)
			{
				nb = 0;
			}
			if (nb > 9)
			{
				nbDisplay2 = nb % 10;
				nb = nb / 10;
			}
			nbDisplay1 = nb;

			if (ii > 0)
			{
				_putchar(',');
				_putchar(' ');
				if ((ii * i) < 10)
				{
					_putchar(' ');
				}
			}

			_putchar(nbDisplay1 + '0');
			if (nbDisplay2 >= 0)
			{
				_putchar(nbDisplay2 + '0');
			}
		}
		_putchar('\n');
	}
}
