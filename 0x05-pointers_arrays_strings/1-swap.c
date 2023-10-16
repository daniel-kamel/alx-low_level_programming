#include "main.h"

/**
 * swap_int - swaps values of 2 ints
 * @a: first int
 * @b: second int
 * Return: void
*/
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
