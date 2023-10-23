#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to the beginning of the located
 * substring, or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
	char *src;
	char *dest;

	while (*haystack != '\0')
	{
		src = haystack;
		dest = needle;

		while (*src == *dest && *dest != '\0')
		{
			src++;
			dest++;
		}

		if (*dest == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (0);
}
