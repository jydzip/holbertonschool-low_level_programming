#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_diagsums - Print sum two diagonals of square matrix
 * @a: array
 * @size: int
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0, base;
	int v1 = 0;
	int v2 = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	while (i < size)
	{
		base = size * i;

		v1 += a[(base + i)];
		v2 +=  a[(base + (size - 1) - i)];
		i++;
	}
	printf("%d, %d\n", v1, v2);
}
