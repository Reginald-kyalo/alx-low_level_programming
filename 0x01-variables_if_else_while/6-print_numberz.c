#include <stdio.h>

/**
 * main - prints numbers 0-9
 *
 * Return: nothing
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(48 + i);
		i++;
	}
	putchar('\n');
	return (0);
}
