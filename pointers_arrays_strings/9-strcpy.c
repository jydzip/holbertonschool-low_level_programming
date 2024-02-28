#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src
 * @dest: (char) destination
 * @src: (char) text
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (1)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else
		{
			if (dest[i] == '\0')
			{
				break;
			}
			else
			{
				dest[i] = '\0';
			}
		}
		i++;
	}
	return (dest);
}
