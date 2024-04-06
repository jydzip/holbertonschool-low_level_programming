#include "main.h"
#include <stdio.h>

char *_read_file(char *filename);
void _create_file(char *filename, char *text_content);

/**
 * main - Start program
 * @argc: Number of arguments
 * @argv: List of arguements
 * Return: result
 */
int main(int argc, char *argv[])
{
	char *filename_from;
	char *filename_to;
	char *text_content;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	filename_from = argv[1];
	filename_to = argv[2];

	text_content = _read_file(filename_from);
	_create_file(filename_to, text_content);
	free(text_content);
	return (0);
}

/**
 * _create_file - Create a file
 * @filename: Filename to create
 * @text_content: Content
 */
void _create_file(char *filename, char *text_content)
{
	int fd, fd_value;
	ssize_t bytes_w;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	if (text_content != NULL)
	{
		bytes_w = write(fd, text_content, _strlen(text_content));
		if (bytes_w == -1)
		{
			close(fd);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
			exit(99);
		}
	}

	fd_value = close(fd);
	if (fd_value < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_value);
		exit(100);
	}
}

/**
 * _read_file - Read a file
 * @filename: Filename to read
 * Return: Content of file
 */
char *_read_file(char *filename)
{
	int fd = open(filename, O_RDONLY);
	char *buffer;
	ssize_t bytes;

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	buffer = (char *)malloc(sizeof(char) * 1024);
	bytes = read(fd, buffer, 1024);
	if (bytes == -1)
	{
		close(fd);
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	close(fd);
	return (buffer);
}

/**
 * _strlen - Return length of a string
 * @s: (int) text
 * Return: (int) length
 */
int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
