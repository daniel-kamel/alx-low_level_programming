#include "main.h"

/**
 * print_square - prints a square followed
 * by a new line.
 * @size: size of the square
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	i = j = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i < size)
	{
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		j = 0;
		_putchar('\n');
		i++;
	}
}
