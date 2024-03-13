#include <stddef.h>
#include <stdlib.h>
#include "dog.h"


/**
 * free_dog - Gives freedom to a dog
 * @d: Dog
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
