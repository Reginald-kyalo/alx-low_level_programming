#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - prints whether a number is positive, zero or negative
 *
 * @i: number to be tested
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
}
