#ifndef IO_H
#define IO_H
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int _putchar(char c);
int _strlen(char *s);

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
#endif
