#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _strstr - Locate a substring
 * @haystack: String
 * @needle: Substring
 * Return: Pointer to beginning of @needle in @haystack, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char c1 = needle[0];
	int needle_length = _strlen(needle);
	int i, ii;

	while (*haystack != '\0')
	{
		if (*haystack == c1)
		{
			for (i = 0; i < needle_length; i++)
			{
				if (needle[i] != *haystack)
				{
					break;
				}
				if (i == needle_length - 1)
				{
					for (ii = 0; ii < i; ii++)
					{
						haystack--;
					}
					return (haystack);
				}
				haystack++;
			}
		}
		haystack++;
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
