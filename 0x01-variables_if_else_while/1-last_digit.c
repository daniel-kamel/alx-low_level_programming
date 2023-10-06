#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints whether the last digit of a random
 * number is greater than 5, equals to 0 or less than 6
 *
 * Return: ALways 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n % 10 > 5)
		printf("The last digit of %d is %d and is greater than 5\n", n, n % 10);
	else if (n % 10 == 0)
		printf("The last digit of %d is %d and is 0\n", n, n % 10);
	else if (n % 10 < 6)
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);

	return (0);
}
