#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates an array of memory
 * @nmemb: number of array elements
 * @size: size of each element
 * Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void **p;

	if (!nmemb || !size)
		return (NULL);

	p = malloc(nmemb);
	if (!p)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		p[i] = malloc(size);
		if (!p[i])
		{
			free(p);
			return (NULL);
		}
		p[i] = 0;
	}

	return (p);
}
