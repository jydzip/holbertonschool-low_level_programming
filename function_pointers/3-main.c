#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Start program
 * @argc: Nb of arguments
 * @argv: Arguments
 * Return: (int)
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *symb;
	int (*f)(int a, int b);
	int result = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	symb = argv[2];

	if ((*symb == '/' || *symb == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	f = get_op_func(symb);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = (*f)(a, b);

	printf("%d\n", result);
	return (0);
}
