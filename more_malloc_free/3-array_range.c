#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 *               from min to max
 * @min: The min/first value of the array.
 * @max: The max/last value of the array.
 *
 * Return: If min > max or fails - NULL.
 *         Otherwise - newly created array.
 */
int *array_range(int min, int max)
{
	int *a, i, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	a = malloc(sizeof(int) * s);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < s; i++)
		a[i] = min++;

	return (a);
}
