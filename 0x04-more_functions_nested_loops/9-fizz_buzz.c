#include <stdio.h>
#include "main.h"

/**
 * main - writes numbers 0 to 100 where
 * numbers divisible by 3 are replaced by Fizz
 * numbers divisible by 5 by Buzz and
 * numbers divisible by both are replaced by FizzBuzz
 *
 * Return: nothing
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
			printf(" ");
	}
	printf("\n");
}
