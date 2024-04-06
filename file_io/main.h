#ifndef IO_H
#define IO_H
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int _putchar(char c);

ssize_t read_textfile(const char *filename, size_t letters);
#endif