#include <stdio.h>

/**
 * main - prints number if command line arguments passed
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
