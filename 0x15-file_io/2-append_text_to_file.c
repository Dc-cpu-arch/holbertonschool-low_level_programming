#include "holberton.h"

/**
 * append_text_to_file - appends a given text at the end of a file.
 * @filename: pointer to chars, the name of the file to write.
 * @text_content: pointer to chars, the given text to write into the file.
 *
 * Return: 1 if succeed, otherwise -1.
 */
int append_text_to_file(const char *filename, char *text_content)
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

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
		return (-1);

	write(fd, text_content, lenght);

	return (1);
}
