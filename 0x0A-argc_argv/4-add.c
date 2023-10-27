#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds 2 numbers
 * @argc: number of command-line arguments
 * @argv: CL argumanets array
 * Return: Always 0 (success)
*/
int main(int __attribute__((unused)) argc, char *argv[])
{
	int i;
	int sum = 0;
	char *c;

	for (i = 1; i < argc; i++)
	{
		for (c = argv[i]; *c != '\0'; c++)
		{
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%i\n", sum);

	return (0);
}
