#include "main.h"

void print_long(long value);

/**
 * times_table - prints the 9 times tables
 *
 * Return: void
 */
void times_table(void)
{
	int i = 0;
	int j = 0;
	int p;

	while (i < 10)
	{
		while (j < 10)
		{
			p = i * j;
			if (p <= 9)
			{
				if (j < 9)
				{
					_putchar(p + 48);
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(p + 48);
				}
			}
			else
			{
				if (j < 9)
				{
					print_long(p);
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					print_long(p);
				}
			}
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}

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
