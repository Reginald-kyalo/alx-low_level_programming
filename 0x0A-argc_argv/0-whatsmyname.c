#include <stdio.h>

/**
 * main - prints name of file
 * @argc: argument counter
 * @argv: array containing arguments
 *
 * Return: pointer to argv
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
