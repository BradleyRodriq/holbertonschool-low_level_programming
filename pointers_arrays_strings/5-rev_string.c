#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int temp;
	int start = 0;
	int end = 0;

	while (s[end])
	{
		end++;
	}
	while (start < end / 2)
	{
		temp = s[start];
		s[start] = s[end - start - 1];
		s[end - start - 1] = temp;
		start++;
	}
}
