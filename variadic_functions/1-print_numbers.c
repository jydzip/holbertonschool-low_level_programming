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
	char *sep;
	va_list args;

	if (n == 0)
		return;
	if (!separator || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != (n - 1))
			printf("%s", sep);
	}
	va_end(args);
	printf("\n");
}
