#include <stdio.h>

/**
 * main - prints possible combination of
 * single digits in ascending order
 *
 * Return: 0
 */

int main(void)
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
	return (0);
}
