#include "main.h"
#include <stdio.h>

/**
 * main - Start program
 * @argc: Number of arguments
 * @argv: List of arguments
 * Return: result
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char *filename_from;
	char *filename_to;
	char buffer[1024];
	ssize_t bytes, bytes_w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	filename_from = argv[1];
	filename_to = argv[2];
	fd_from = open(filename_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename_from);
		exit(98);
	}
	fd_to = open(filename_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename_to);
		exit(99);
	}
	bytes = read(fd_from, buffer, 1024);
	if (bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename_from);
		exit(98);
	}
	bytes_w = write(fd_to, buffer, bytes);
	if (bytes_w == -1 || bytes_w != bytes)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename_to);
		exit(99);
	}
	close_file(fd_from);
	close_file(fd_to);
	return (0);
}

/**
 * close_file - Close file
 * @fd: File open
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
