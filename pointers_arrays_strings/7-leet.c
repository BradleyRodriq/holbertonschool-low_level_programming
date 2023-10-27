#include "main.h"
/**
 * leet - changes string chars to leet counterpart
 *
 * @str: string to be converted
 * Return: converted string
 */
char *leet(char *str)
{
	int i = 0;
	int j;
	char a[8] = {'O', 'L', 'F', 'E', 'A', 'F', 'F', 'T'};

	while (str[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == a[j] || str[i] - 32 == a[j])
				str[i] = j + '0';
		}
		i++;
	}
	return (str);
}
