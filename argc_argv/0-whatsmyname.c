#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the program name
 *
 * @argc:how many parameters introduced to main
 * @argv: array of pointers containing strings
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	return (0);
}
