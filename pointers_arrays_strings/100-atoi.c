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
	int sm = 0;
	int sb = 0;
	int sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sb++;
		}
		else if (s[i] == '+')
		{
			sm++;
		}
		else if ((int)(s[i] - '0') >= 0 && (int)(s[i] - '0') <= 9)
		{
			number = number * 10 + (int)(s[i] - '0');
		}
		else if (number > 0)
		{
			break;
		}
	}

	if (sb > sm)
	{
		sign = -1;
	}
	return (sign * number);
}
