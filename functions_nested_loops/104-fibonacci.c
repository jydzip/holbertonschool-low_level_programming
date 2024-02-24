#include <stdio.h>

/**
 *main - Start program
 *Return: (int) Success
 */
int main(void)
{
	int nb;
	int n1 = 1, n2 = 2;

	printf("%d, %d", n1, n2);
	for (nb = 3; nb <= 98; nb++)
	{
		int total = n1 + n2;
		
		printf(", ");
		printf("%d", total);

		n1 = n2;
		n2 = total;
	}
	printf("\n");
	return (0);
}
