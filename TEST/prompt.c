#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	char **arguments = av;
	(void) ac;

	while (*arguments != NULL)
	{
		printf("%s ", *arguments);
		arguments++;
	}
	printf("\n");
	return (0);
}
