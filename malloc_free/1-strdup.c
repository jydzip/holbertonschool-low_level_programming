#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - Copy a str in newly allocated space in memory
 * @str: Text
 * Return: Pointer or NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, size = _strlen(str);
	int sp = size * sizeof(char) + 1;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sp);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}
	ptr[sp - 1] = '\0';
	return (ptr);
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
