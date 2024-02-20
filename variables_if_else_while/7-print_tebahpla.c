#include <stdio.h>

/**
 *main - Start program
 *Return: (int) Success
 */
int main(void)
{
	char *text = "abcdefghijklmnopqrstuvwxyz";
	int i = 25;

	while (i >= 0)
	{
		char letter = text[i];

		putchar(letter);
		i--;
	}
	putchar('\n');
	return (0);
}
