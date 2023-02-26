#include "main.h"

/**
 * print_square - prints a square using #
 *
 * @size: number of #
 * Return: nothing
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (size > 0)
				_putchar('#');
			else
				break;
		}
		_putchar('\n');
	}
}
