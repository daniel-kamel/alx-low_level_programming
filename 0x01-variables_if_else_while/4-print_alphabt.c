#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all the letters of the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i == 101 || i == 113)
		{
			i++;
			continue;
		}

		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}
