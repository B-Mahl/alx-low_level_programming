#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: string to write to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	ssize_t bytes;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	}
	else
		return (1);
	bytes = write(fd, text_content, i);
	close(fd);

	return (bytes == -1 ? -1 : 1);
}
