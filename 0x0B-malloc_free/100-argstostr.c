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
	int i, j, c, size = 0;

	if (ac < 1)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		if (!av[i])
		{
			return (NULL);
		}
		size += (int) strlen(av[i]);
	}

	s = malloc(size + ac + 1);
	if (!s)
	{
		return (NULL);
	}

	for (i = j = c = 0; c < size + ac + 1; c++, j++)
	{
		if (j == (int) strlen(av[i]))
		{
			s[c] = '\n';
			i++;
			c++;
			j = 0;
			if (i == ac)
			{
				break;
			}
		}
		s[c] = av[i][j];
	}

	return (s);
}
