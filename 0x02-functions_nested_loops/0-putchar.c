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

	for (int i = 0; i < strlen(s); i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

	return (0);
}
