#include "main.h"

/**
 * print_alphabet - prints lower case alphabet letters
 *
 * Description: prints lowercase alphabet letters
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
