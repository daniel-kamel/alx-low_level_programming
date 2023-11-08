#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints name
 * @name: name
 * @f: function to print name
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		exit(1);

	f(name);
}
