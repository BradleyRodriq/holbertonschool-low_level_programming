#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string to be converted to integer
 */
int _atoi(char *s)
{
	int i;
	int d;
	int n;
	int len;
	int dgt;
	int f;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	dgt = 0;
	f = 0;

	while (s[len])
		len++;
	while (i < len && f == 0)
	{
		if (s[i] == '-')
			d++;
		if (s [i] >= '0' && s[i] <= '9')
		{
			dgt = s[i] - '0';
			if (d % 2)
				dgt = -dgt;
			n = n * 10 + dgt;
			f = 1;
			if (s[i + 1] < '0' || s [i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}


