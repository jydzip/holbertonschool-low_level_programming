#include <stdio.h>

/**
 *main - Start program
 *Return: (int) Success
 */
int main(void)
{
	char *text = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	while (i < 52)
	{
		putchar(text[i]);
		i++;
	}

	putchar('\n');

	return (0);
}
