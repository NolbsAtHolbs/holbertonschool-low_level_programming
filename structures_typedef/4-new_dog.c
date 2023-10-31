#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog and stores a copy of name and owner
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to new dog, or NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	name_copy = malloc(strlen(name) + 1);

	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	owner_copy = malloc(strlen(owner) + 1);

	if (owner_copy == NULL)
	{
		free(new_dog);
		free(name_copy);
		return (NULL);
	}
	strcpy(name_copy, name);
	strcpy(owner_copy, owner);

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
