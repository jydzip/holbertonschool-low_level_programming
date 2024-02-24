#include <stdio.h>

/**
 *main - Start program
 *Return: (int) Success
 */
int main(void)
{
	unsigned long int nb, n1, n2, b1, b2, c1, c2;

	n1 = 1;
	n2 = 2;

	printf("%lu", n1);

	for (nb = 1; nb < 91; nb++)
	{
		printf(", %lu", n2);
		n2 = n2 + n1;
		n1 = n2 - n1;
	}
	b1 = n1 / 1000000000;
	b2 = n1 % 1000000000;
	c1 = n2 / 1000000000;
	c2 = n2 % 1000000000;

	for (nb = 92; nb < 99; ++nb)
	{
		printf(", %lu", c1 + (c2 / 1000000000));
		printf("%lu", c2 % 1000000000);
		c1 = c1 + b1;
		b1 = c1 - b1;
		c2 = c2 + b2;
		b2 = c2 - b2;
	}
	printf("\n");
	return (0);
}
