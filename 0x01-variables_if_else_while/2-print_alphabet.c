#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return: 0
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
