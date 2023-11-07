#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *woof = malloc(sizeof(dog_t));

	if (!woof)
	{
		free(woof);
		return (NULL);
	}

	if (!name || age < 0 || !owner)
	{
		return (NULL);
	}

	woof->name = malloc(sizeof(char) * strlen(name) + 1);
	if (!woof->name)
	{
		free(woof);
		return (NULL);
	}

	woof->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (!woof->owner)
	{
		free(woof);
		return (NULL);
	}

	strcpy(woof->name, name);
	woof->age = age;
	strcpy(woof->owner, owner);

	return (woof);
}
