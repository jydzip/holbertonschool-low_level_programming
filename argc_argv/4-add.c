#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Start program
 * @argc: Count argument
 * @argv: Array argument
 * Return: (int) Success
 */
int main(int argc, char *argv[])
{
	int i, nb;
	int result = 0;

	for (i = 1; i < argc; i++)
	{
		nb = atoi(argv[i]);
		if (!nb)
		{
			printf("Error\n");
			return (1);
		}
		result += nb;
	}

	printf("%d\n", result);
	return (0);
}
