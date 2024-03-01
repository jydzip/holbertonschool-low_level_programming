#include "main.h"
#include <stdio.h>


/**
 * leet - Encode a string into 1337
 * @t: char
 * Return: (char)
 */
char *leet(char *t)
{
	int i, ii, tmp, l1, l2, nb;
	int size = _strlen(t);
	int spcs[][3] = {
		{'a', 'A', '4'},
		{'e', 'E', '3'},
		{'o', 'O', '0'},
		{'t', 'T', '7'},
		{'l', 'L', '1'}
	};

	for (i = 0; i < size; i++)
	{
		tmp = t[i];

		for (ii = 0; ii < 5; ii++)
		{
			l1 = spcs[ii][0];
			l2 = spcs[ii][1];
			nb = spcs[ii][2];

			if (l1 == tmp || l2 == tmp)
			{
				tmp = nb;
				break;
			}
		}
		t[i] = tmp;
	}
	return (t);
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
