#include "main.h"
#include <string.h>

/**
 *main - Start program
 *Return: (int) Success
 */
int main(void)
{
	int i;
	char *text = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}

	_putchar('\n');
	return (0);
}
