#include <stdio.h>

/**
 * main - prints possible combinations of two digit
 * numbers in ascending order
 *
 * Return: nothing
 */

void main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(48 + i);
			putchar(48 + j);
			if (i == 8 && j == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
