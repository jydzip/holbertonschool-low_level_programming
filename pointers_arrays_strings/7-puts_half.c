#include "main.h"


/**
 * puts_half - Prints half of string
 * @str: (char) text
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int length = (int)_strlen(str);

	for (i = length / 2; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 * _strlen - Return length of a string
 * @s: (int) text
 * Return: (int) length
 */
int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
