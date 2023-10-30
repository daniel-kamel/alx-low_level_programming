#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of args
 * @av: args array
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, size = 0;

	if (ac < 1 || !av)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		size += (int) strlen(av[i]);
	}

	s = malloc(size + ac);
	if (!s)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		while (*av[i] != '\0')
		{
			s[j] = *av[i];
			j++;
			av[i]++;
		}
		s[j] = '\n';
		j++;
	}

	return (s);
}
