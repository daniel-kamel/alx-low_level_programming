#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name
 * @f: function to print name
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
