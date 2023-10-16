#include "main.h"

/**
 * _strlen - returns size of string
 * @s: string to get size of
 * Return: size of string s
*/
int _strlen(char *s)
{
	int size = 0;

	while (s[size] != '\0')
	{
		size++;
	}

	return (size);
}
