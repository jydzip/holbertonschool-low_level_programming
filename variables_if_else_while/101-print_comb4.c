#include <stdio.h>

/**
 *main - Start program
 *Return: (int) Success
 */
int main(void)
{
	int i, ii, iii;

	for (i = 0; i < 8; i++)
	{
		for (ii = 1; ii < 10; ii++)
		{
			for (iii = 2; iii < 10; iii++)
			{
				if (ii <= i || iii <= ii)
				{
					continue;
				}
				putchar(i % 10 + '0');
				putchar(ii % 10 + '0');
				putchar(iii % 10 + '0');

				if (i == 7 && ii == 8 && iii == 9)
				{
					continue;
				}
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
