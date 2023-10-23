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
	char *one;
	char *two;

	while (*haystack != '\0')
	{
		one = haystack;
		two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);

		haystack++;
	}

	return (0);
}
