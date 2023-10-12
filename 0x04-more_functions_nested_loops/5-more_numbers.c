#include "main.h"

/**
 * more_numbers - prints (0 - 14) 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (i <= 10)
	{
		while (j <= 14)
		{
			if (j == 0)
			{
				_putchar('0');
			}

			print_long(j);
			j++;
		}
		j = 0;
		i++;
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_long - prints long numbers
 * @value: long number
 *
 * Return: void
 */
void print_long(long value)
{
	if (value != 0)
	{
		print_long(value / 10);
		_putchar((value % 10) + '0');
	}
}
