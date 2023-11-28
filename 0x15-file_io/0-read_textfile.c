#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output
 *
 * @filename: string pointer
 * @letters: number of letters printed
 * Return: no of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdescr;
	ssize_t numrd, numwr;
	char *buffer;

	if (!filename)
		return (0);

	fdescr = open(filename, O_RDONLY);

	if (fdescr == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	numrd = read(fdescr, buffer, letters);
	numwr = write(STDOUT_FILENO, buffer, numrd);

	close(fdescr);
	free(buffer);

	return (numwr);
}
