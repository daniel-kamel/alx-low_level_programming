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
	unsigned int i, c1, c2;
	char *conc;

	if (!s1)
		c1 = 0;
	else
		c1 = strlen(s1);
	if (!s2)
		c2 = n = 0;
	else
		c2 = strlen(s2);

	if (n > c2)
		n = c2;

	conc = malloc((c1 + n + 1) * sizeof(char));
	if (!conc)
	{
		return (NULL);
	}

	for (i = 0; i < c1; i++)
		conc[i] = s1[i];

	for (i = 0; i < n; i++)
		conc[c1 + i] = s2[i];

	conc[c1 + n] = '\0';

	return (conc);
}
