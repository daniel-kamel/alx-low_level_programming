#include "function_pointers.h"

/**
 * int_index - searches an array
 * @array: array
 * @size: size of array
 * @cmp: compare function
 * Return: first occurance of element or -1 if not found
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
