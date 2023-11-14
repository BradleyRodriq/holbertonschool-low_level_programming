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
	dog_t *ndog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	ndog->name = malloc(sizeof(char*) * *name);
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}

	ndog->owner = malloc(sizeof(char*) * *owner);
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}

	ndog->name = name;
	ndog->age = age;
	ndog->owner = owner;

	return (ndog);
}
