#include <stdio.h>

/**
 *main - Start program
 *Return: (int) Success
 */
int main(void)
{
	char *a = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;
	while (i < 26)
	{
		putchar(a[i]);
		i++;
	}
	return (0);
}
