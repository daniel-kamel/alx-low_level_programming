#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocated memory using malloc
 * @b:size of memory
 * Return: void
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	if (!b)
	{
		exit(98);
	}

	p = malloc(b);
	if (!p)
	{
		exit(98);
	}

	return (p);
}
