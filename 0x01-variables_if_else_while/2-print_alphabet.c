#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return: nothing
 */

void main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}
