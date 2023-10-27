#include "main.h"

/**
 * _memset - takes the point to an integer as parameter and updates value to 98
 * @s: pointer
 * @b: memory to change
 * @n: index
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
