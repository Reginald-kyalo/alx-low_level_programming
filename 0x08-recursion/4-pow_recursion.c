#include "main.h"
/**
 * _pow_recursion - finds x to the power of y
 * @x: number to be raised
 * @y: power value
 * Return: result of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

		result *= _pow_recursion(x, y - 1);

	return (result);
}