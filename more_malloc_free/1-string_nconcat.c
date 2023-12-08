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
	char *nconcat;
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
	nconcat = malloc(sizeof(char) * l - 6);
if (nconcat == NULL)
	{
		return (NULL);
	}
	l = 0;
	for (i = 0; s1[i]; i++)
	{
		nconcat[l++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		nconcat[l++] = s2[i];
	}
	nconcat[l] = '\0';

	return (nconcat);
}
