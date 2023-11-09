#include "variadic_functions.h"

/**
 * print_strings - prints strings separated by separator
 * @separator: separator string between strings
 * @n: number of arguments
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (s != NULL)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nil)");
		}

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(ap);
	putchar('\n');
}
