#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Print strings by arguments
 * @separator: String between each numbers
 * @n: Number of argument to count
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *sep;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		if (str == NULL)
			str = "(nil)";

		printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
