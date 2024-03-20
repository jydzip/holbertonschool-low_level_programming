#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum of all arguments
 * @n: Number of argument to count
 *
 * Return: (int) Result
 */
int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int i;
	va_list args;

	if (n != 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			result += va_arg(args, int);
		}
		va_end(args);
	}
	return (result);
}
