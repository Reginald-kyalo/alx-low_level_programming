#include "main.h"
/**
 * _sqrt_recursion - finds natural square root of num
 * @n: number to find square root of
 * Return: return root if found, -1 if not found
 */
int _sqrt_recursion(int n)
{
	int root = 2;

	if (n < 0)
	{
		return (-1);
	}

	else if ((root * root) == n)
	{
		return (root);
	}
	else if (root == n / 2)
	{
		return (-1);
	}
	root++;
	_sqrt_recursion(n);
}
