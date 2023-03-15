#include <stdio.h>

/**
 * main - prints number if command line arguments passed
 * @argc: argument count
 * @argv: array
 *
 * Return: int
 *
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
