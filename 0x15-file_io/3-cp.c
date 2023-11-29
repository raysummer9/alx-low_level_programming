#include "main.h"

/**
 * err_handler - checks if files are open and handles errors
 * @file_from: file to copy from
 * @file_to: destination file
 * @argv: argument vector
 * Return: void
 */

void err_handler(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file from file %s\n", argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}
}


/**
 * main - copy the content of a file from one to the other
 * @argc: count
 * @argv: vector
 * Return: returns 0 if succesful
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t numchars, nwr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	err_handler(file_from, file_to, argv);

	numchars = 1024;
	while (numchars == 1024)
	{
		numchars = read(file_from, buff, 1024);
		if (numchars == -1)
			err_handler(-1, 0, argv);
		nwr = write(file_to, buff, numchars);
			if (nwr == -1)
				err_handler(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
