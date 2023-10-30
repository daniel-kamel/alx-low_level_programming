#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	int i;
	int j;

	conc = malloc(sizeof(s1) + sizeof(s2) - 2);
	if (!conc)
	{
		printf("Cannot allocate memory");
		return (NULL);
	}

	if (s1)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			conc[i] = s1[i];
		}
	}

	if (s2)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			conc[i] = s2[j];
			i++;
		}
	}

	return (conc);
}
