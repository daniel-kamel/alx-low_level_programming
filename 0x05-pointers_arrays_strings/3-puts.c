#include "main.h"

/**
 * _puts - writes a string to stdout
 * @str: string to get size of
 * Return: size of string s
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}