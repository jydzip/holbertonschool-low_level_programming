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
	char *h, *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}
	return (NULL);
}
