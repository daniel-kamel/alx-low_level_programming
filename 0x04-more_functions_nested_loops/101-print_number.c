#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_number - prints an integer using _putchar
 * @n: integer to be printed
 * Return: void
 */
void print_number(int n)
{
	int i = 1;
	int num;

	if (n >= 0 && n < 10)
	{
		_putchar(n + '0');
	}
	else
	{
		if (n < 0)
		{
			n = abs(n);
			_putchar('-');
		}
		while (num < n)
		{
			i *= 10;
			num = n % i;
		}

		i /= 10;

		while (i >= 1)
		{
			num = (int) ((n - (n % i)) / i) % 10;
			_putchar(num + '0');
			i /= 10;
		}
	}
}
