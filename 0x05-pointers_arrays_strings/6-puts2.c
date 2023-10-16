#include "main.h"

/**
 * puts2 - prints every other character
 * @str: string
 * Return: void
*/
void puts2(char *str)
{
	int len, i = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	len--;

	while (i <= len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
