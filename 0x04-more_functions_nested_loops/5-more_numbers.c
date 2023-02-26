#include "main.h"

/**
 * more_numbers - prints 0 - 14 ten times followed by a new line
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar('1');
				_putchar((j % 10) + 48);
		}
		_putchar('\n');

	}

}
