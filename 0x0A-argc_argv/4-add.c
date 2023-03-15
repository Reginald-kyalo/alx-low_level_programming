#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds two numbers
 * @argc: arguents to be passed
 * @argv: stores arguments
 *
 * Return: 0 success 1 on failure
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	if (argc == 0)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
