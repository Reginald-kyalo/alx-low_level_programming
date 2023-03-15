#include <stdio.h>
#include <stdlib.h>
/**
 * main - multpilies two numbers
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 1 on failure, something else on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
