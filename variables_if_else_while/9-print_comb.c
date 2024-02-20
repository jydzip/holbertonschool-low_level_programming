#include <stdio.h>

/**
 *main - Start program
 *Return: (int) Success
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i % 10 + '0');
		if (i < 9)
		{
			putchar(',');
		}
		if (i >= 0 && i < 9)
		{
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
