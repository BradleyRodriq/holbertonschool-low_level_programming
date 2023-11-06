#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the source string
 * @c: the character to be located within s string
 * Return: pointer of c onwards
 */
char *_strchr(char *s, char c)
{
	if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
