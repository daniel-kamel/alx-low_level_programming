#include "main.h"

/**
 * _pow_recursion - calculates x power y
 * @x: base
 * @y: exponantial
 * Return: x raised to the power of y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
