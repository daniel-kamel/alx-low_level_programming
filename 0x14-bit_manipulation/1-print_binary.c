#include "main.h"

/**
 * print_binary - prints a number as binary string
 * @n: number to print
 * Return: void
*/
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, flag = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			putchar('1');
			flag++;
		}
		else if (flag)
			putchar('0');
	}
	if (!flag)
		putchar('0');
}
