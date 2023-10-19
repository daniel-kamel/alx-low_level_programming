#include "main.h"

/**
 * string_toupper - changes string to uppercase
 * @s: string
 * Return: char * uppercase string
*/
char *string_toupper(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		i++;
	}

	return (s);
}
