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
	printf("Age: %f\n", d->age);
	printf("Owner: %p\n", d->owner);
}
