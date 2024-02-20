#include <stdio.h>

/**
 *main - Start program
 *Return: (int) Success
 */
int main(void)
{
	char *text = "abcdfghijklmnoprstuvwxyz";
	int i = 0;

	while (i < 24)
	{
		char letter = text[i];
		putchar(letter);
		i++;
	}
	putchar('\n');
	return (0);
}
