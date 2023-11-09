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
	int i = 0, n;
	char *c, *st, *fmt = "fics";

	if (format)
	{
		va_start(ap, format);
		n = strlen(format);

		while (i < n)
		{
			c = strchr(fmt, format[i]);

			if (c)
			{
				switch (c[0])
				{
					case 'f':
						printf("%f%s", va_arg(ap, double), i < n - 1 ? ", " : "");
						break;
					case 'i':
						printf("%i%s", va_arg(ap, int), i < n - 1 ? ", " : "");
						break;
					case 'c':
						printf("%c%s", va_arg(ap, int), i < n - 1 ? ", " : "");
						break;
					case 's':
						st = va_arg(ap, char *);
						printf("%s%s", st ? st : "(nil)", i < n - 1 ? ", " : "");
						break;
				}
			}
			i++;
		}
		va_end(ap);
		putchar('\n');
	}
}
