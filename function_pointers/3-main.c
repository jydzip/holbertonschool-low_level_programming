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
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	char *symb = argv[2];
	int (*f)(int a, int b) = get_op_func(symb);
	int result = 0;

	(void)argc;

	if (f == NULL)
	{
		printf("Error\n");
		return (1);
	}
	result = (*f)(a, b);

	printf("%d\n", result);
	return (0);
}
