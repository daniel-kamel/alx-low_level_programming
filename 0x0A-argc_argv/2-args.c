#include "main.h"
#include <stdio.h>

/**
 * main - prints its arguments
 * @argc: number of command-line arguments
 * @argv: CL argumanets array
 * Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
