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
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", num1 * num2);
	}
	return (0);
}
