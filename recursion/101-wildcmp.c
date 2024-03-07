#include "main.h"
#include <stdio.h>

int wildcmp(char *s1, char *s2);
int __wildcmp(char *s1, char *s2, int size1, int size2, int *p1, int *p2);
int __wildcmp_check_ast(char *s1, char *s2, int p2, int p1, int size1, int i);
int __wildcmp_get_char_after_ast(char *s2, int p2, int size2);

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
	int p1 = 0;
	int p2 = 0;

	printf("- Size %d#%d\n", size1, size2);

	return (__wildcmp(s1, s2, size1, size2, &p1, &p2));
}

/**
 * __is_palindrome - Recursion
 * @s: Text
 * @size: Size of text
 * @a: Index A
 * @b: Index B
 * Return: (int) result
 */
int __wildcmp(char *s1, char *s2, int size1, int size2, int *p1, int *p2)
{
	int inc = 1;
	int inc2 = 1;

	printf("Check %d:%d %c#%c\n", *p1, *p2, s1[*p1], s2[*p2]);
	if (*p1 == size1)
	{
		return (1);
	}
	else if (s2[*p2] == '*')
	{
		int next_p2 = __wildcmp_get_char_after_ast(s2, *p2, size2);

		printf("NEW POS %d\n", next_p2);
		if (s2[next_p2] == '\0')
		{
			return (1);
		}
		else {
			inc = __wildcmp_check_ast(s1, s2, next_p2, *p1, size1, 1);

			if (inc == 0)
			{
				return (0);
			}

			inc2 = next_p2 - *p2;
		}
	}
	else if (s1[*p1] != s2[*p2])
	{
		return (0);
	}

	*p1 += inc;
	*p2 += inc2;
	return (__wildcmp(s1, s2, size1, size2, p1, p2));
}

int __wildcmp_check_ast(char *s1, char *s2, int p2, int p1, int size1, int i)
{
	int np = p1 + (i - 1);
	char next = s2[p2];

	printf("* Check %d -> %c\n", p1, next);
	printf("** %c\n", s1[np]);
	if (np == (size1 + 1))
	{
		return (0);
	}
	else if (s1[np] == next)
	{
		return (i);

	}
	return __wildcmp_check_ast(s1, s2, p2, p1, size1, i + 1);
}

int __wildcmp_get_char_after_ast(char *s2, int p2, int size2)
{
	if (p2 == size2)
	{
		return size2;
	}
	else if (s2[p2] != '*')
	{
		return p2;
	}
	return __wildcmp_get_char_after_ast(s2, p2 + 1, size2);
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
