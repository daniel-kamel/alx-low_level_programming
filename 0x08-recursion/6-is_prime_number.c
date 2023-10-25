#include "main.h"

/**
 * is_prime_helper - helper function to is_prime_number
 * @n: number
 * @d: number to check if n is divisible or not
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int d)
{
	if (d == n)
		return (1);
	if (n % d == 0)
		return (0);
	return (is_prime_helper(n, d + 1));
}

/**
 * is_prime_number - checks if n is a prime number
 * @n: number
 * Return: 1 if n is a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_helper(n, 2));
}
