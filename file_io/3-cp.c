#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - copies the content of a file to another file
 * @argc: the argument count
 * @argv: the argument vectors
 * Return: 0 if success, 97,98,99 or 100 if fail
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((r = read(from, buffer, 1024)) > 0)
	{
		w = write(to, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(from) == -1 || close(to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd");
		exit(100);
	}
	return (0);
}
