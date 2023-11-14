#include "dog.h"
#include <stdlib.h>

/**
 *_strlen - prints the length of a string
 *@s: string to be counted
 *Return: length of string
 */
int _strlen(char *s)


{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strncpy - a function ...
 * @dest: the chaine
 * @src: the chaine
 * @n: the number
 *
 * Return: 1 or 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/**
 * new_dog - create new dog
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner
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

	ndog->name = malloc(_strlen(name) + 1);
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}

	ndog->owner = malloc(_strlen(name) + 1);
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
