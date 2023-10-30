#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copies a string
 * @str: string
 * Return: pointer to copied string or NULL
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0;
	int j;

	if (!str)
	{
		return (NULL);
	}

	while (str[i] >= '\0')
	{
		i++;
	}

	s = malloc(i * sizeof(char));
	if (!s)
	{
		printf("Cannot allocate memory");
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		s[j] = str[j];
	}

	return (s);
}
