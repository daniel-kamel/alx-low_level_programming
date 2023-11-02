#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of characters from s2 to concatenate
 * Return: pointer to concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *conc;

	if (n > strlen(s2))
	{
		n = strlen(s2);
	}

	conc = malloc((strlen(s1) + n) * sizeof(char));
	if (!conc)
	{
		return (NULL);
	}

	strcpy(conc, s1);

	for (i = 0; i < n; i++)
	{
		conc[strlen(s1) + i] = s2[i];
	}
	conc[strlen(s1) + i] = '\0';

	return (conc);
}
