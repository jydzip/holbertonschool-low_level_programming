#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - Check if string is a palindrome
 * @s: Text
 * Return: (int) result
 */
int is_palindrome(char *s)
{
	int size = _strlen_recursion(s);
	int a = 0;
	int b = size - 1;

	return (__is_palindrome(s, size, &a, &b));
}

/**
 * __is_palindrome - Recursion
 * @s: Text
 * @size: Size of text
 * @a: Index A
 * @b: Index B
 * Return: (int) result
 */
int __is_palindrome(char *s, int size, int *a, int *b)
{
	int middle = (int)size / 2;

	if (*a == middle)
	{
		return (1);
	}
	if (s[*a] != s[*b])
	{
		return (0);
	}
	*a += 1;
	*b -= 1;
	return (__is_palindrome(s, size, a, b));
}

/**
 * _strlen_recursion - Length of a string
 * @s: Text
 * Return: (int) value
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
