#include "main.h"
#include <stdio.h>

void print_array(int *a, int n)
{
	int i = 0;
	if (n > 0)
	{
		while (i < n - 1)
		{
			printf ("%d, ", a[i]);
			i++;
		}
		printf ("%d", a[i]);
	}
	printf ("\n");
}
