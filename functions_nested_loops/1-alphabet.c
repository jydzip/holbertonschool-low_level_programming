/**
 * print_alphabet - Print all letters of the alphabet
 * Return: void
 */
void print_alphabet(void)
{
	int i;
	char *text = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
}
