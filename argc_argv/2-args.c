#include <stdio.h>
/**
 * main - prints all arguments it receives with a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: argument
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
