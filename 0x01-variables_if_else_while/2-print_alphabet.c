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
	for (int i = 97; i < 123; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return 0;
}
