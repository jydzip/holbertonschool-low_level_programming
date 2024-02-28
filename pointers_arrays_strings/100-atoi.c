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
		int t = (int)(s[i] - '0');

		if ((t < 0 || t > 10) && number > 0)
		{
			break;
		}

		if (s[i] == '-')
		{
			sb++;
		}
		else if (s[i] == '+')
		{
			sm++;
		}
		else if (t >= 0 && t <= 9)
		{
			number = number * 10 + t;
		}
	}

	if (sb > sm)
	{
		sign = -1;
	}
	return (sign * number);
}
