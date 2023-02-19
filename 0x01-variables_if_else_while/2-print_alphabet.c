#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return: always 0
 */

int main()
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}
