#include <stdio.h>

/* 
 * main - Entry Point
 *
 * Return: Always 0(SUccess)
 *
 */

int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of char: %lu bytes\n", (unsigned long)sizeof(d));
	printf("Size of int: %lu bytes\n", (unsigned long)sizeof(a));
	printf("Size of long int: %lu bytes\n", (unsigned long)sizeof(b));
	printf("Size of long long int: %lu bytes\n", (unsigned long)sizeof(c))
	printf("Size of float: %lu bytes\n", (unsigned long)sizeof(f));
	return 0;
}
