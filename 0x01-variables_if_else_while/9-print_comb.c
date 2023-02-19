#include <stdio.h>

/**
 * main - prints possible combination of
 * single digits in ascending order
 *
 * Return: nothing
 */

void main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(48 + i);
		if (i == 9)
			break;
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
}
