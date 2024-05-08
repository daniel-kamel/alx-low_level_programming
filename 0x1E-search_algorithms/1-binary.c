#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middle;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right + 1);
		middle = (left + right) / 2;

		if (value == array[middle])
			return (middle);

		if (value < array[middle])
			right = middle - 1;
		else
			left = middle + 1;
	}
	return (-1);

}

/**
 * print_array - prints the array that the binary search
 * function is searching in
 * @array: pointer to the first element of the array
 * @start: start index
 * @end: end index
 * Return: void
*/
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");

	for (i = start; i < end; i++)
	{
		printf("%d%s", array[i], (i < end - 1) ? ", " : "\n");
	}
}
