#include "main.h"

/**
 *times_table - prints the time table up to 9
 *Return: multiplicative table
 */

void times_table(void)
{
	int b, m;

	for (b = 0; b < 10; b++)
	{
		for (m = 0; m < 10; m++)
		{
			if (b * m > 9)
			{
			_putchar (b * m / 10 + '0');
			_putchar (b * m % 10 + '0');
			_putchar (',');
			_putchar (' ');
			}
			else
			{
				_putchar (b * m  + '0');
				_putchar (',');
				_putchar (' ');
				_putchar (' ');
			}
		}
		_putchar ('\n');
	}
}
