#include "main.h"
#include <stdio.h>

/**
 * _atoi - Convert a string to an integer
 * @s: (char) text
 * Return: int
 */
int _atoi(char *s)
{
	int i;
	int number = 0;
	int sign = -1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			number *= 10;
			number -= s[i] - '0';
		}
		else if (number > 0)
		{
			break;
		}
	}
	number *= sign;
	return (number);
}
