#include <stdio.h>

/**
 *main - Start program
 *Return: (int) Success
 */
int main(void)
{
	char *text = "0123456789";
	int i = 0;

	while (i < 10)
	{
		char digit = text[i];

		putchar(digit);
		i++;
	}
	putchar('\n');
	return (0);
}
