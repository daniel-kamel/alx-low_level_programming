#include <string.h>
#include "variadic_functions.h"

/**
 * print_all - prints all arguments
 * @format: format
 * Return: void
*/
void print_all(const char * const format, ...)
{
	va_list ap;
	int i, n;
	char *c, *st, *fmt = "fics";

	va_start(ap, format);
	n = strlen(format);
	i = 0;

	while (i < n)
	{
		c = strchr(fmt, format[i]);

		if (c)
		{
			switch (c[0])
			{
				case 'f':
					printf("%f", va_arg(ap, double));
					break;
				case 'i':
					printf("%i", va_arg(ap, int));
					break;
				case 'c':
					printf("%c", va_arg(ap, int));
					break;
				case 's':
					st = va_arg(ap, char *);
					printf("%s", st ? st : "(nil)");
					break;
			}

			if (i < n - 1)
				printf(", ");
		}
		i++;
	}

	va_end(ap);
	putchar('\n');
}
