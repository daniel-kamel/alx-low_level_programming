#include "main.h"

/**
 * _sqrt_helper - helper function
 * @n: number
 * @g: guess number
 * Return: squareroot of n if found
*/
int _sqrt_helper(int n, int g)
{
	if (g * g > n)
	{
		return (-1);
	}

	if (g * g == n)
	{
		return (g);
	}

	return (_sqrt_helper(n, g + 1));
}

/**
 * _sqrt_recursion - calculates squareroot
 * @n: number
 * Return: squareroot of n
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}

	return (_sqrt_helper(n, 1));
}
