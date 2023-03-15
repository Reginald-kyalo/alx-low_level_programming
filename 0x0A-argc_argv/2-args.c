#include <stdio.h>
/**
 * main - prints arguments passed
 * @argc: argument count
 * @argv: pointer to pointer
 *
 * Return: something
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
