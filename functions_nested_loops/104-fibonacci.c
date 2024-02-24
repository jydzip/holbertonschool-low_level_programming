#include <stdio.h>

/**
 *main - Start program
 *Return: (int) Success
 */
int main(void)
{
	int nb;
	unsigned long int n1 = 0, n2 = 0, n3 = 1, n4 = 2;
	unsigned long int t1, t2, t3;
	unsigned long int number = 10000000000;

	printf("%lu, %lu", n3, n4);
	for (nb = 2; nb < 98; nb++)
	{
		printf(", ");

		if (n3 + n4 > number || n1 > 0 || n2 > 0)
		{
			t1 = (n3 + n4) / number;
			t2 = (n3 + n4) % number;
			t3 = n1 + n2 + t1;
			n2 = t3;
			n1 = n2;
			n4 = t2;
			n3 = n4;
			printf("%lu%010lu", n1, n4);
		}
		else
		{
			t2 = n3 + n4;
			n4 = t2;
			n3 = n4;
			printf("%lu", n4);
		}
	}
	printf("\n");
	return (0);
}
