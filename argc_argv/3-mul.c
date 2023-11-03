#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int produce;
	int a;
	int b;

	if (argc <= 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	produce = a * b;
	{
		printf("%d\n", produce);
	}
	return (0);
}
