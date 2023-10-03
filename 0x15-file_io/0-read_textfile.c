#include "main.h"
/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output
 * @filename: text file to read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters it could read
 * and print OR 0 if filename is null OR if write
 * fails OR file cannot be opened
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t actual = 0;
	char *storage;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	storage = malloc(sizeof(char) * letters + 1);
	if (storage == NULL)
	{
		close(fd);
		return (0);
	}
	actual = read(fd, storage, letters);
	if (actual > 0)
	{
		storage[actual] = '\0';
		write(STDOUT_FILENO, storage, actual);
	}
	free(storage);
	close(fd);

	return (actual);
}
