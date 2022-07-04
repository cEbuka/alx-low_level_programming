#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point.
 *
 * @void: No params.
 *
 * Return: Always 0(success).
 */
int main(void)
{
	int n, nld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	nld = n % 10;

	if (nld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, nld);
	}
	else if (nld < 6 && nld != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, nld);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, nld);
	}

	return (0);
}
