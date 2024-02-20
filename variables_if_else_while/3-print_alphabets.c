#include <stdio.h>
#include <ctype.h>

/**
 *main - Start program
 *Return: (int) Success
 */
int main(void)
{
	int x = 'A';
	int stade = 0;

	while (x <= 'Z')
	{
		if (stade == 0)
		{
			putchar(tolower(x));
		}
		else
		{
			putchar(x);
		}

		if (x == 'Z' && stade == 0)
		{
			x = 'A';
			stade = 1;
		}
		else
		{
			x++;
		}
	}

	putchar('\n');

	return (0);
}
