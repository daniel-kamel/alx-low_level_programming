#include "main.h"
#include <stdio.h>

/**
 * is_separator - determines if a character is a separator
 * @c: character
 * Return: 1 if c is a separator, 0 otherwise
*/
int is_separator(char c)
{
	int i = 0;
	char separator[] = " \t\n,.!?\"(){}";

	while (i < 12)
	{
		if (c == separator[i])
		{
			return (1);
		}
		i++;
	}

	return (0);
}

/**
 * is_lower - determines if a character is lowercase
 * @c: character
 * Return: 1 if c is lowercase, 0 otherwise
*/
int is_lower(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 * Return: string with capitalized words
*/
char *cap_string(char *s)
{
	int i = 0;
	int separator;

	while (s[i] != '\0')
	{
		if (is_separator(s[i]))
			separator = 1;
		else if (is_lower(s[i]) && separator == 1)
		{
			s[i] -= 32;
			separator = 0;
		}
		else
			separator = 0;
		i++;
	}

	return (s);
}
