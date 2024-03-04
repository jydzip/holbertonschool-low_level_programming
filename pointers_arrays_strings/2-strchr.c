#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locate a character in a string
 * @s: String
 * @c: Character to search
 * Return: Pointer first occurence of @c in @s, or NULL
 */
char *_strchr(char *s, char c)
{
	char *ptr = NULL;

	while (*s != '\0')
	{
		if (*s == c)
		{
			ptr = s;
			break;
		}
		s++;
	}
	return (ptr);
}
