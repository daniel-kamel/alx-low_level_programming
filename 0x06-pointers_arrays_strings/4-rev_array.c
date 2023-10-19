#include "main.h"

/**
 * reverse_array - reverses array
 * @a: array
 * @n: number of elements in a
 * Return: void
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int tmp;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
