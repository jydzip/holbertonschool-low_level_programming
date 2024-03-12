#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * @n: Nb to concatenate
 * Return: Pointer new allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, ii;
	unsigned int size1 = 0, size2 = 0;
	int size;

	if (s1 != NULL)
		size1 = _strlen(s1);
	if (s2 != NULL)
		size2 = _strlen(s2);
	if (n < size2)
		size2 = n;

	size = (size1 * sizeof(char)) + (size2 * sizeof(char)) + 1;

	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		ptr[i] = s1[i];
	}
	for (ii = 0; ii < size2; ii++)
	{
		ptr[ii + size1] = s2[ii];
	}
	ptr[size1 + size2] = '\0';
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
