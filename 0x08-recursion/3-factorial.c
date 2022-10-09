#include "main.h"
/**
 * factorial - calculates the factorial of a number
 * @n: integer to be calculated
 * Return: if n > 0 find factorial if n < 0 return 1
 */
int factorial(int n)
{
	int  result = 0;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		result = n * factorial(n - 1);
	}
	return (result);
}
