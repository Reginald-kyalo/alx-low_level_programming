#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints whether the last digit of number
 * is greater than 5, less that 6 or zero
 *
 * Return: always 0
 */

int main(void)
{
	int n;
	int last_dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_dig = (n % 10);

	if (last_dig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_dig);
	}
	else if (last_dig == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, last_dig);
	}
	else if (last_dig < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_dig);
	}

	return (0);
}
