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
	int length = _strlen(src);

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
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
