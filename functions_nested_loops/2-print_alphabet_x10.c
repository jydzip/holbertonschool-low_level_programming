#include "main.h"

/**
 * print_alphabet_x10 - Print all letters of the alphabet, ten times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i, count;
	char *text = "abcdefghijklmnopqrstuvwxyz";

	for (count = 0; count < 10; count++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(text[i]);
		}
		_putchar('\n');
	}
}
