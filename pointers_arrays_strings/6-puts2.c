#include "main.h"
/**
 * _puts - prints every two lines of string
 * @str: string to be printed every two lines
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar (str[i]);
		i += 2;
	}
	_putchar('\n');
}
