#include <stdio.h>

/**
 * main - function
 *
 * Return: always 0
 */

int main(void)
{
	char n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');

	return (0);
}
