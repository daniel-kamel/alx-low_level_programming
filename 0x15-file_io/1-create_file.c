#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
*/
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - creates a file
 * @filename: file to be created
 * @text_content: contents of the file
 * Return: 1 on success or -1 on failiure
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = _strlen(text_content), written = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		written = write(fd, "", 0);
		close(fd);
		if (written != len)
			return (-1);
		else
			return (1);
	}

	written = write(fd, text_content, len);
	close(fd);

	if (written != len)
		return (-1);

	return (1);
}
