#include "main.h"

/**
 * print_triangle - prints a triangle followed
 * by a new line.
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i = 1;
	int j = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i <= size)
	{
		while (j < size - i)
		{
			_putchar(' ');
			j++;
		}
		j = 0;
		while (j < i)
		{
			_putchar('#');
			j++;
		}
		j = 0;
		_putchar('\n');
		i++;
	}
}
