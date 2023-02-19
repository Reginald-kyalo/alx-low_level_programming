#include <stdio.h>

/**
 * main - prints the alphabet except q and e
 *
 * Return: nothing
 */

void main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
		putchar(i);
	}
	putchar('\n');
}

