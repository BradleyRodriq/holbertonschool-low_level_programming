#include "main.h"

/**
 * _sqrt - helper function to find square root
 * @a: same value as n
 * @b: number that iterates from 1 to n
 *
 * Return: On success 1, or -1 on error
 */
int _sqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (_sqrt(a, b + 1));
}
/**
 * _sqrt_recursion - returs narutal square root of n
 * @n: number to be squared
 * Return: On success 1, or -1 on error
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
