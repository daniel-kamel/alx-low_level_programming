#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: number of command-line arguments
 * @argv: CL argumanets array
 * Return: Always 0 (success)
*/
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%i\n", argc - 1);

	return (0);
}
