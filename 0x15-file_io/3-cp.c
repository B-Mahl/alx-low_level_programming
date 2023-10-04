#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments given to the program
 * @argv: an array of pointers to the arguments
 * Return: 0 on success
 */

#define BUFFER_SIZE 1024

void error_exit(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	const char *file_from;
	const char *file_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_r, bytes_wr;

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		close(fd_from);
		exit(99);
	}
	while ((bytes_r = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_wr = write(fd_to, buffer, bytes_r);

		if (bytes_wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if (bytes_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(fd_from);
		close(fd_to);
		exit(98);
	}

    if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}

