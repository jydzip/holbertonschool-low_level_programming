#include "main.h"

/**
 *  print_to_98 - Prints all natural numbers from n to 98
 *  @n: number max to loop
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i, nb, is_negative, is_increment;

	is_increment = 1;
	if (n > 98)
	{
		is_increment = 0;
	}
	i = n;
	while (1 == 1)
	{
		is_negative = 1 ? i < 0 : 0;
		nb = i * ((i > 0) - (i < 0));
		if (is_negative == 1)
			_putchar('-');
		if ((i >= 0 && i <= 9) || (i >= -9 && i < 0))
			_putchar((nb % 10) + '0');
		else
		{
			if (nb > 99)
			{
				_putchar((nb / 100) + '0');
				nb = nb % 100;
			}
			_putchar((nb / 10) + '0');
			_putchar((nb % 10) + '0');
		}
		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		else
			break;
		if (is_increment == 1)
			i++;
		else
			i--;
	}
	_putchar('\n');
}
