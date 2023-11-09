#include "variadic_functions.h"

/**
 * print_all - prints all arguments
 * @format: format
 * Return: void
*/
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *st, *separator = "";

	va_start(ap, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'f':
					printf("%s%f", separator, va_arg(ap, double));
					break;
				case 'i':
					printf("%s%i", separator, va_arg(ap, int));
					break;
				case 'c':
					printf("%s%c", separator, va_arg(ap, int));
					break;
				case 's':
					st = va_arg(ap, char *);
					if (!st)
						st = "(nil)";
					printf("%s%s", separator, st);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	
	putchar('\n');
	va_end(ap);
}
