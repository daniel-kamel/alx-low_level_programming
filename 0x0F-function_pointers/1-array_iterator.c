#include "function_pointers.h"

/**
 * array_iterator - executes action on array elements
 * @array: array
 * @size: size of array
 * @action: action to execute
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	if (!array || !action)
		exit(1);

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
