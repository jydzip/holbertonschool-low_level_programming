#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Start programm
 *Return: (int) Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("0 is zero\n");
	}
	else
	{
		if (n > 0)
		{
			printf("%d is positive\n", n);
		}
		else
		{
			printf("%d is negative\n", n);
		}
	}

	return (0);
}
