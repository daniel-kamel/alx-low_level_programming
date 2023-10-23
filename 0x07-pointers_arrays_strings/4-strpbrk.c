#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: chars to search for
 * Return: pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such
 * bytes is found
*/
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char *tmp;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				tmp = &s[i];
				return (tmp);
			}
			j++;
		}

		i++;
	}

	return (0);
}
