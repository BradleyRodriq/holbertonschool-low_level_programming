#include "main.h"
#include <stdlib.h>
/**
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

