#include "main.h"

/**
 * _strncat - concatenates 2 strings
 * @dest: string 1
 * @src: string 2
 * @n: number of bytes from src
 * Return: pointer to concatenated string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		if (j == n)
		{
			break;
		}

		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
