#include "main.h"
#include <string.h>

/**
 * main - prints _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *s = "_putchar";
	int i = 0;

	for (; i < strlen(s); i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

	return (0);
}
