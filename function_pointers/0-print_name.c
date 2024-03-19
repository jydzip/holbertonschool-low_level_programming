#include "function_pointers.h"

/**
 * print_name - Print a name
 * @name: Name
 * @f: Function to print
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
