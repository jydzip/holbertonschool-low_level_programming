#include <stdio.h>

/**
 *main - Start program
 *Return: (int) Success
 */
int main(void)
{
	long int nb;
	long int num1 = 0, num2 = 1;
	float total;

	while (1 == 1)
	{
		nb = num1 + num2;
		if (nb > 4000000)
		{
			break;
		}

		num1 = num2;
		num2 = nb;
	}
	printf("%.0f\n", total);
	return (0);
}
