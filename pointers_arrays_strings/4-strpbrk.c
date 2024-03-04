#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Search string for any of a set of bytes
 * @s: String
 * @accept: Only of bytes accepted
 * Return: Pointer to @s, matches one of the bytes @accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int accept_length = _strlen(accept);
	int i = 0;

	while (*s != '\0')
	{
		for (i = 0; i < accept_length; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
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
