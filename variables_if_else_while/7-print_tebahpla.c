#include <stdio.h>

/**
 *main - Start program
 *Return: (int) Success
 */
int main(void)
{
	char *text = "abcdefghijklmnopqrstuvwxyz";
	int i = 26;

	while (i >= 0)
	{
		char letter = text[i];

		putchar(letter);
		i--;
	}
	return (0);
}
