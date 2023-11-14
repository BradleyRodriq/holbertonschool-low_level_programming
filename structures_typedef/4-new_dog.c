#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create new dog
 * @name - new dog name
 * @age - new dog age
 * @owner - new dog owner
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo->name = malloc(sizeof(char*) * *name);
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}

	doggo->owner = malloc(sizeof(char*) * *owner);
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}

	doggo->name = name;
	doggo->age = age;
	doggo->owner = owner;

	return (doggo);
}
