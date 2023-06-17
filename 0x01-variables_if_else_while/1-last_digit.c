#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry
 *
 * Return: 0 on Success
 */
int main(void)
{
	int n;

	int 1d;

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
