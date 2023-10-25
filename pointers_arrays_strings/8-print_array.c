#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the number of elements in the array to be printed
 * @a: the number pointer
 * @n: the number
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n - 1)
		{
			printf("%d, ", a[i]);
			i++;
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
