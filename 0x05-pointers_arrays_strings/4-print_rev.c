#include "main.h"

/**
 * print_rev - writes a string to stdout in reverse
 * @s: string to print in reverse
 * Return: void
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	if (i > 0)
	{
		while (i >= 0)
		{
		_putchar(s[i]);
		i--;
		}
	}
	_putchar('\n');
}
