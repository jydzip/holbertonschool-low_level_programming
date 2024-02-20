#include <stdio.h>

/**
 *main - Start program
 *Return: (int) Success
 */
int main(void)
{
	int count = 0;
	int i = 0;
	int ii = 0;

	while (count < 90)
	{
		i++;
		count++;
		if (i == 0 && ii == 0)
		{
			continue;
		}
		if (i == ii || ii > i)
		{
			continue;
		}
		putchar(ii % 10 + '0');
		putchar(i % 10 + '0');

		if (ii == 8 && i == 9)
		{
			break;
		}

		if (i >= 9)
		{
			i = 0;
			ii++;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
