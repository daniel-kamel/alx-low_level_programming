#include "main.h"

/**
 * print_line - prints a line in the terminal
 * @n: number of '_' characters
 * Return: void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
