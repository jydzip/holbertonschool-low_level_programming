#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 *main - Start program
 *Return: (int) <<Failed>>
 */
int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDOUT_FILENO, text, sizeof(text) - 1);
	return (1);
}
