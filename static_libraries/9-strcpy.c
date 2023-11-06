#include "main.h"

/**
 * _strcpy - copies the src string to dest, creating a duplicate
 * @dest: destination for the srccopy
 * @src: source string to be copied into dest
 * Return: copied into dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
