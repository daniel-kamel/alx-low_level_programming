#include "_putchar.c"

/**
 * main - prints _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *s = "_putchar";
	int i = 0;

	while (i < 10)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
