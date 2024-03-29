#include "main.h"
/**
 *   _strcpy - copies string into another
 *  @dest: pointer to first char in destination string
 *  @src: pointer to first char in src string
 *  Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
