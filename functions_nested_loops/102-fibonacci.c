#include <stdio.h>

/**
 *main - Start program
 *Return: (int) Success
 */
int main(void)
{
	int i;
	long int nb;
	long int num1 = 0, num2 = 1;

	for (i = 0; i < 50; i++)
	{
		nb = num1 + num2;

		printf("%lu", nb);

		num1 = num2;
		num2 = nb;

		if (i < 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
