#include "holberton.h"

/**
 * create_file - creates a file using file i/o and oflags.
 * @filename: pointer to chars with the name of the given file.
 * @text_content: pointer to chars with the characters to write in the file.
 *
 * Return: 1 if succeeded, otherwise -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	int lenght = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[lenght])
			lenght++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd < 0)
		return (-1);

	write(fd, text_content, lenght);

	return (1);
}
