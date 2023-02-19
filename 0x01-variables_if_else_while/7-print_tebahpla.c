#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return: nothing
 */

void main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
}
