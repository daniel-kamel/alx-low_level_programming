#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: pointer to a string of 1s and 0s
 * Return: the converted number, or 0
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int n = 0;

	if (!b)
		return (0);

	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] > '1' || b[i] < '0')
			return (0);

		if (b[i] == '1')
			n += 1 << (strlen(b) - i - 1);
	}

	return (n);
}
