#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 * @filename: pointer to a char, name of the file to read and print.
 * @letters: the number of characters the program must read and print.
 *
 * Return: the total number of letters readed and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	int throwput = 0;
	int status = 0;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));

	if (!buffer)
		return (0);

	throwput = read(fd, buffer, letters);
	status = write(STDOUT_FILENO, buffer, throwput);

	if (status < 0)
		return (0);

	free(buffer);
	close(fd);
	return (throwput);
}
