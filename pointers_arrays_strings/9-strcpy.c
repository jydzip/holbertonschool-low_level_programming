#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src
 * @dest: (char) destination
 * @src: (char) text
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i < 98; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
