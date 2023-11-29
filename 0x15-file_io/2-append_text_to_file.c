#include "main.h"

/**
 * append_text_to_file - add text to an existing file
 * @filename: name of the file we are appending text to
 * @text_content: content to be appended
 * Return: returns -1 if it fails and 1 if succesful
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filedescr, nletters, rwr;

	if (!filename)
		return (-1);

	filedescr = open(filename, O_WRONLY | O_APPEND);

	if (filedescr == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;
		rwr = write(filedescr, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}
	close(filedescr);
	return (1);
}
