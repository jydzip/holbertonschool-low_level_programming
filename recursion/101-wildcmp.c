#include "main.h"
#include <stdio.h>

/**
 * wildcmp - Compare two strings
 * @s1: Text originale
 * @s2: Text to compare
 * Return: (int) result
 */
int wildcmp(char *s1, char *s2)
{
	int size1 = _strlen_recursion(s1);
	int size2 = _strlen_recursion(s2);

	/* printf("- Size %d#%d\n", size1, size2); */

	return (__wildcmp(s1, s2, size1, size2, 0, 0));
}

/**
 * __wildcmp - Recursion
 * @s1: Text 1
 * @s2: Text 2 wildcard
 * @size1: Size of @s1
 * @size2: Size of @s2
 * @p1: Index of @s1
 * @p2: Index of @s2
 * Return: (int) result
 */
int __wildcmp(char *s1, char *s2, int size1, int size2, int p1, int p2)
{
	if (p1 == size1 && p2 == size2)
	{
		return (1);
	}
	else if (p2 == size2)
	{
		return (0);
	}

	/* printf("Check %d:%d %c#%c\n", p1, p2, s1[p1], s2[p2]); */

	if (p1 == size1)
	{
		if (s2[p2] == '*')
		{
			return (__wildcmp(s1, s2, size1, size2, p1, p2 + 1));
		}
		return (0);
	}
	else if (s2[p2] == '*')
	{
		return (__wildcmp_check_ast(s1, s2, size1, size2, p1, p2));
	}
	else if (s1[p1] == s2[p2])
	{
		return (__wildcmp(s1, s2, size1, size2, p1 + 1, p2 + 1));
	}
	return (0);
}


/**
 * __wildcmp_check_ast - Recursion Asterisk
 * @s1: Text 1
 * @s2: Text 2 wildcard
 * @size1: Size of @s1
 * @size2: Size of @s2
 * @p1: Index of @s1
 * @p2: Index of @s2
 * Return: (int) result
 */
int __wildcmp_check_ast(
		char *s1, char *s2, int size1, int size2, int p1, int p2)
{
	int match_current, match_next;

	/* printf("* Check %d:%d %c#%c\n", p1, p2, s1[p1], s2[p2]); */

	if (p2 == size2 - 1)
	{
		return (1);
	}

	if (p1 < size1)
	{
		match_current = __wildcmp(s1, s2, size1, size2, p1, p2 + 1);
		match_next = __wildcmp(s1, s2, size1, size2, p1 + 1, p2);

		return (match_current || match_next);
	}
	return (0);
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
