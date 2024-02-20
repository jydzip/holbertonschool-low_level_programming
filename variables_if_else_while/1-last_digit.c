#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main - Start program
 *Return: (int) Success
 */
int main(void)
{
	int n, last_digit;
	char *text2;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;
	if (last_digit == 0)
	{
		text2 = "0";
	}
	else
	{
		if (last_digit >= 5)
		{
			text2 = "greater than 5";
		}
		else
		{
			text2 = "less than 6 and not 0";
		}
	}
	printf("Last digit of %d is %d and is %s\n", n, last_digit, text2);
	return (0);
}
