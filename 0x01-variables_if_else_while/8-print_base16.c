#include <stdio.h>

/**
 * main - prints the alphabet in upper and lower case
 *
 * Return: nothing
 */

void main(void)
{
	int i = 0;
	char j = 'a';

	while (i <= 9)
	{
		putchar(48 + i);
		i++;
	}
	while (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
}
