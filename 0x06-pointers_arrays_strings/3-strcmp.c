#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: +ve if s1 is larger, 0 if both are equal
 * or -ve if s2 is larger
*/

int _strcmp(char *s1, char *s2)
{
	int result = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			result = ((int) *s1 - 48) - ((int) *s2 - 48);
			return (result);
		}
		s1++;
		s2++;
	}

	return (result);
}
