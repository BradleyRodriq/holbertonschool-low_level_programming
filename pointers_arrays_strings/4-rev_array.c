#include "main.h"

/**
 * reverse_array - a function that takes a pointer to an int as parameter and
 * @a: the tab integer
 * @n: the number
 *
 * Return: 1 or 0
 */

void reverse_array(int *a, int n)

{
	int i;
	int j;
	int temp;

	j = n - 1;
	i = 0;

	while (i < j)

	while (a[i] > a[j])
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;

		i++;
		j++;
	}
}
