#include "main.h"

/**
 * _prime - Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: increases to check if prime
 * Return: On success 1, on error -1
 */
int _prime(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (_prime(a, b + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 * Return: On success 1, on error -1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, 2));
}
