#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Create a new dog
 * @name: Name of new dog
 * @age: Age of a new dog
 * @owner: Owner of a new dog
 * Return: Structure of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog = malloc(sizeof(dog_t));
	char *new_name = *name;
	char *new_owner = *owner;

	if (ndog == NULL)
		return (NULL);
	ndog->name = new_name;
	ndog->age = age;
	ndog->owner = new_owner;
	return (ndog);
}
