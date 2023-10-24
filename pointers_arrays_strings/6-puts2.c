#include "main.h"
/**
 * _puts - prints every two lines of string
 * @str: string to be printed every two lines
 */

void puts2(char *str)
{
	int l, i;

	l = 0;

	while (str[l] != '\0')
		{
			l++;
		}
	for (i = 0; i < l; i += 2)
	{
		_putchar (str[i]);
	}
	_putchar('\n');
}
