#include <stdio.h>

/**
 *main - Start program
 *Return: (int) Success
 */
int main(void)
{
	int i, ii, iii, iiii;

	for (i = 0; i < 10; i++)
	{
		for (ii = 0; ii < 10; ii++)
		{
			for (iii = 0; iii < 10; iii++)
			{
				for (iiii = 0; iiii < 10; iiii++)
				{

					if ((iii <= i && iiii <= ii) || (iii < i && iiii > ii))
					{
						continue;
					}
					putchar(i % 10 + '0');
					putchar(ii % 10 + '0');
					putchar(' ');
					putchar(iii % 10 + '0');
					putchar(iiii % 10 + '0');
					if (i == 9 && ii == 8 && iii == 9 && iiii == 9)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
