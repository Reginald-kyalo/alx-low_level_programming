#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - finds natural square root of num
 * @num: number to find square root of
 * @root: square root of num
 * Return: return root if found -1 if not found
 */
int find_sqrt(int num, int root)
{
	if (root * root == num)
	{
		return (root);
	}
	else if (root == num / 2)
	{
		return (-1);
	}
	return (find_sqrt(num, root + 1));
}
