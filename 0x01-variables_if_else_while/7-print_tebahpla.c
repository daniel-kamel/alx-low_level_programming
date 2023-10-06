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
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}

	putchar('\n');

	return (0);
}
