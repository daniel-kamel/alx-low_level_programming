#include "main.h"

/**
 * print_diagonal - prints a diagonal line in the terminal
 * @n: number of '\' characters
 * Return: void
 */
void print_diagonal(int n)
{
	int i = n;
	int j = i;

	while (n > 0)
	{
		if (j > n)
		{
			_putchar('\n');
			while (j > n)
			{
				_putchar(' ');
				j--;
			}
			j = i;
		}
		_putchar('\\');
		n--;
	}
	_putchar('\n');
}
