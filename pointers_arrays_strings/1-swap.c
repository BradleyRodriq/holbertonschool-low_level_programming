#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: variable to switch
 * @b: second variable to switch
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
