#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum ofthe two
 * diagonals of a square matrix of integers
 * @a: array
 * @size: size
 * Return: void
*/
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum_1 = 0;
	int sum_2 = 0;

	for (i = 0; i <= (size * size); i += size + 1)
	{
		sum_1 = sum_1 + a[i];
	}

	for (j = size - 1; j <= (size * size) - size; j += size - 1)
	{
		sum_2 = sum_2 + a[j];
	}

	printf("%d, %d\n", sum_1, sum_2);
}
