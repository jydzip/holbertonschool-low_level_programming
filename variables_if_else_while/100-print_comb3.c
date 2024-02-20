#include <stdio.h>

/**
 *main - Start program
 *Return: (int) Success
 */
int main(void)
{
	int count = 0;
	int i = 1;
	int ii = 0;

	while (count < 90)
	{
		putchar(ii % 10 + '0');
		putchar(i % 10 + '0');
		i++;
		if (i > 9)
		{
			i = 0;
			ii++;
		}
		if (count < 89)
		{
			putchar(',');
			putchar(' ');
		}
		count++;
	}
	putchar('\n');
	return (0);
}
