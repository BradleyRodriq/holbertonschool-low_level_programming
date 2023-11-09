#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of s2 bytes
 * Return: the concatenated string or NULL if fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int l = n, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] || s2[i]; i++)
	{
		l++;
	}
	concat = malloc(sizeof(char) * l);
	if (concat == NULL)
	{
		return (NULL);
	}
	l = 0;
	for (i = 0; s1[i]; i++)
	{
		concat[l++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		concat[l++] = s2[i];
	}
	concat[l] = '\0';

	return (concat);
}
