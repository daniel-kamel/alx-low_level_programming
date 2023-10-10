#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: number
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		ld = -n % 10;
	}
	else
	{
		ld = n % 10;
	}

	_putchar(ld + 48);
	return (ld);
}
