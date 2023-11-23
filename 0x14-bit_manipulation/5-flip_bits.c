#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: number
 * @m: number
 * Return: number of bits you would need to flip to get
 * from n to m
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int result = 0;

	while (diff)
	{
		if (diff & 1ul)
			result++;
		diff = diff >> 1;
	}

	return (result);
}
