#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates 2 strings
 * @dest: string 1
 * @src: string 2
 * Return: pointer to concatenated string
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
