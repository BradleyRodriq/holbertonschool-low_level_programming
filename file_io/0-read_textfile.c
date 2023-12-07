#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: pointer to the name of the file
 * @letters: number of retters the function will read and return
 * Return: If fails - 0
 *         If else - the read file in STDOUT.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	rd = read(o, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (o == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		return (0);
	}

	free(buffer);
	close(o);

	return (wr);
}
