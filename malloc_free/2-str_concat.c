#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the string to be added to
 * @s2: the string to add to s1
 * Return: the concatenated string or NULL if fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, concat_i = 0, l = 0;

	for (i = 0; s1[i]; i++)
	{
		l++;
	}
	for (i = 0; s2[i]; i++)
	{
		l++;
	}
	concat_str = malloc(sizeof(char) * l + 1);
	if (concat_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		concat_str[concat_i++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		concat_str[concat_i++] = s2[i];
	}
	return (concat_str);
}
