#include "main.h"
/**
 *_strlen - prints the length of a string
 *@s: string to be counted
 *@i: variables to count strings
 */
int _strlen(char *s)


{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
