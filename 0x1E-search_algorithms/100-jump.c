#include "search_algos.h"

/**
 * jump_search - function that searches for a value in an array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i += step)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", i - step, i);
			size = i;
			i -= step;
			break;
		}
	}

	for (; i <= size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
