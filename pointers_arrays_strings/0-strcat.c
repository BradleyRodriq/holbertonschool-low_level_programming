#include "main.h"
#include <stdio.h>

char *_strcat(char *dest, char *src)
{
	char *full_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (full_dest);
}
