#include "main.h"
#include <stdio.h>
/**
 * _strncat - merges two strings together
 * @dest: the base merge string
 * @src: the string to be merged into dest
 * @n: limit of characters
 * Return: merged string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
