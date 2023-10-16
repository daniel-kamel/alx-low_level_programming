#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: void
*/
void rev_string(char *s)
{
	char c;
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (j < i / 2)
	{
		c = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = c;
		j++;
	}
}
