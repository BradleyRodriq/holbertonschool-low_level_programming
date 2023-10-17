#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
		if (n > 5)
			printf("the string and is greater than 5\n")
		else if (n = 0)
			printf("the string and is 0\n")
		else if (n < 6)
			printf("the string and is less than 6 and not 0\n")	
	return (0);
}
