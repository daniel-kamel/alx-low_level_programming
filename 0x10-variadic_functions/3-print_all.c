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
	char *st;

	if (format)
	{
		va_start(ap, format);

		while (format[i])
		{
			switch (format[i])
			{
				case 'f':
					printf("%f%s", va_arg(ap, double), (format[i + 1]) ? ", " : "");
					break;
				case 'i':
					printf("%i%s", va_arg(ap, int), (format[i + 1]) ? ", " : "");
					break;
				case 'c':
					printf("%c%s", va_arg(ap, int), (format[i + 1]) ? ", " : "");
					break;
				case 's':
					st = va_arg(ap, char *);
					printf("%s%s", st ? st : "(nil)", (format[i + 1]) ? ", " : "");
					break;
			}
			i++;
		}
		va_end(ap);
		putchar('\n');
	}
}
