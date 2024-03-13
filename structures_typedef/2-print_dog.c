#include <stddef.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Print structure dog
 * @d: Pointer structure dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %p\n", d->name);
	if (d->age != 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: %s\n", "(nil)");
	printf("Owner: %p\n", d->owner);
}
