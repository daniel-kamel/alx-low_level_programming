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
			if (j > 9)
			{
				_putchar('1');
			}

			_putchar((j % 10) + '0');
			j++;
		}
		j = 0;
		i++;
		_putchar('\n');
	}
}
