#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to be read
 * @letters: number of letters to be read
 * Return: the actual number of letters it could read and print
 * or 0 if it fails
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char buff[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	bytes = read(fd, &buff[0], letters);
	bytes = write(STDOUT_FILENO, &buff[0], letters);

	close(fd);

	return (bytes);
}
