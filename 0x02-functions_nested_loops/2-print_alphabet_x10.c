#include "main.h"

/**
  print_alphabet_x10 - prints lower case alphabet letters 10x
 *
 * Description: prints lowercase alphabet letters
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 97;
	int j = 0;

	while (j < 10)
	{
		while (i < 123)
		{
			_putchar(i);
			i++;
		}
		i = 97;
		_putchar('\n');
		j++;
	}
}
