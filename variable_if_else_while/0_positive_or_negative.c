#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;

	strand(time(0));
	n=rand(0) - RAND_MAX / 2;
	if (n > 0)
		printf ("$n is positive");
	else if (n==)
		printf ("$n is zero");
	else
		printf("$n is negative");
	return (0);
