#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: the array to search in
 * @size: the size of the array
 * @cmp: the function
 * Return: -1 if NULL, the first integer otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
