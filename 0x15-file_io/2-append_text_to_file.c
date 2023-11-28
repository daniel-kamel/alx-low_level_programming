#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: file to be appended to
 * @text_content: text to be appended
 * Return: 1 on success or -1 on failiure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = strlen(text_content), written;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (len)
		written = write(fd, text_content, len);
	close(fd);

	return (written == len ? 1 : -1);
}
