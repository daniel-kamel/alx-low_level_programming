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

	if (argc < 2)
	{
		printf("%i\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) < 0 || atoi(argv[i]) % 10 != 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%i\n", sum);

	return (0);
}
