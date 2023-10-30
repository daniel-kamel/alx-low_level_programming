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
	int i = 0;
	int j = 0;

	conc = malloc(sizeof(s1) + sizeof(s2) - 4);
	if (!conc)
	{
		printf("Cannot allocate memory");
		return (NULL);
	}

	if (s1)
	{
		for (; s1[i] != '\0'; i++)
		{
			conc[i] = s1[i];
		}
	}

	if (s2)
	{
		for (; s2[j] != '\0'; j++)
		{
			conc[i] = s2[j];
			i++;
		}
	}

	return (conc);
}
