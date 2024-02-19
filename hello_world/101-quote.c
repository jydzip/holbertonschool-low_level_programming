#include <stdio.h>
#include <string.h>

/**
 *main - Start program
 *Return: (int) <<Failed>>
 */
int main(void)
{
	char *text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int textLength = strlen(text);

	for (int i = 0; i < textLength; i++)
	{
		putchar(text[i]);
	}
	return (1);
}
