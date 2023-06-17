#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the last digit of a randomly generated number
 * and whether it is less than 5, less than 6 or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	1d = n % 10;

	if (1d > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, 1d);
	}
	else if (1d == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, 1d);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, 1d);
	}

	return (0);
}
