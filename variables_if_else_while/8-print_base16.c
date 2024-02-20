#include <stdio.h>

/**
 *main - Start program
 *Return: (int) Success
 */
int main(void)
{
	char *text = "0123456789abcdef";
	int i = 0;

	while (i < 16)
	{
		char letter = text[i];

		putchar(letter);
		i++;
	}	
	putchar('\n');
	return (0);
}
