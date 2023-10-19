#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: string
 * Return: string is encoded
*/

char *leet(char *c)
{
	char *ptr = c;
	char in[] = {'A', 'E', 'O', 'T', 'L'};
	int out[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(in) / sizeof(char); i++)
		{
			if (*c == in[i] || *c == in[i] + 32)
			{
				*c = 48 + out[i];
			}
		}
		c++;
	}

	return (ptr);
}
