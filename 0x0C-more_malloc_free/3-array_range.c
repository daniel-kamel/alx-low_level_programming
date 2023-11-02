#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of ints
 * @min: starting int
 * @max: ending int
 * Return: array of ints
*/
int *array_range(int min, int max)
{
	int size, i;
	int *a;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	a = malloc(size * sizeof(int));
	if (!a)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		a[i] = min + i;

	return (a);
}
