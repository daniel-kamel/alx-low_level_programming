#include "main.h"
#include <stdio.h>

/**
 * print_array - n elements of an array of integers
 * @a: pointer to int
 * @n: number of ints in the array
 * Return: void
*/
void print_array(int *a, int n)
{
	int i = 1;

	if (n <= 0)
	{
		printf("\n");
		return;
	}

	printf("%d", a[0]);

	while (i < n)
	{
		printf(", %d", a[i]);
		i++;
	}

	printf("\n");
}
