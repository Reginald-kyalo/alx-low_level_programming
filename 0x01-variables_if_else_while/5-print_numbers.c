#include <stdio.h>

/**
 * main - prints numbers 0-9
 *
 * Return: always 0
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
