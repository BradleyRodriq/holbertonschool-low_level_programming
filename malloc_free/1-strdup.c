#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copies a string into a newly allocated
 * space in memory
 * @str: string to be copied
 *
 * Return: if error or str is empty, NULL
 * otherwise the duplicated string
 */
char *_strdup(char *str)
{
	char *dupe;
	int i, l = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		l++;
	dupe = malloc(sizeof(char) * (l + 1));
	if (dupe == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		dupe[i] = str[i];
	dupe[l] = '\0';
	return (dupe);
}
