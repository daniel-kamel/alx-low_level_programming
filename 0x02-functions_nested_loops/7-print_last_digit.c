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
	int ld = abs(n) % 10;

	ld = abs(ld);

	_putchar(ld + 48);
	return (ld);
}
