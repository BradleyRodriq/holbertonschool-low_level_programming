#include "main.h"

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
