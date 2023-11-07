#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes it.
 * @size: the size of the array
 * @c: the specific char to initialize the array with
 *
 * Return: if size is 0 or fails, return NULL.
 *         Otherwise it returns a pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);
	a = malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
