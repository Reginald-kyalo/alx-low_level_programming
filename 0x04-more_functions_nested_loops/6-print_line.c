#include "main.h"

/**
 * print_line - printsa number of  _  followed by a new line
 * @n: number of lines to be printed
 * Return: nothing
 */

void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else
		{
			break;
		}
		i++;
	}
	_putchar('\n');
}
