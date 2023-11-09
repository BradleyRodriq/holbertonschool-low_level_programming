#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of a certain number
 * @nmemb: The number of elements
 * @size: The byte size
 *
 * Return: If nmemb or size =0, or function fails, NULL
 *         Otherwise pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	char *f;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(size * nmemb);

	if (m == NULL)
		return (NULL);

	f = m;

	for (i = 0; i < (size * nmemb); i++)
		f[i] = '\0';

	return (m);
}
