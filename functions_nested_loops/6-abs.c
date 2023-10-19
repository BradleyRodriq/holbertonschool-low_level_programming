#include "main.h"
#include <stdio.h>
/**
 * _abs - finds the absolute value of a number
 * @c: the variable used
 * Return: -a or a;
 */

int _abs(int c)
{
	if (c < 0)
		return (-c);
	else if (c >= 0)
	{
		return (c);
	}
		return (0);
}
