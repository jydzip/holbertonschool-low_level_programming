#include "main.h"

/**
 * jack_bauer - Print every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i, ii, iii, iiii;

	for (i = 0; i <= 2; i++)
	{
		for (ii = 0; ii <= 3; ii++)
		{
			for (iii = 0; iii <= 5; iii++)
			{
				for (iiii = 0; iiii <= 9; iiii++)
				{
					_putchar(i + '0');
					_putchar(ii + '0');
					_putchar(':');
					_putchar(iii + '0');
					_putchar(iiii + '0');
					_putchar('\n');
				}
			}
		}
	}
	return;
}
