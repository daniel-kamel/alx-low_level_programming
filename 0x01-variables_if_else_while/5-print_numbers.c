#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}

	putchar('\n');

	return (0);
}
