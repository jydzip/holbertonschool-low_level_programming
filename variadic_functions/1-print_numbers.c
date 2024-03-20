#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Print numbers by arguments
 * @separator: String between each numbers
 * @n: Number of argument to count
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (!separator || n == 0)
		return;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != (n - 1))
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
