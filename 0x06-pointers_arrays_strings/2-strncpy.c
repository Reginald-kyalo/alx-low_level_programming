#include "main.h"

/**
 * _strncpy - concatenates two strings src
 * to dest upto n bytes
 * @dest: string to be appended
 * @src: appends to dest
 * @n: number of bytes to be appended to dest
 *
 * Return: pointer to @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int y = 0;
	int dest_len = 0;

	y = 0;
	while (src[y] && y < n)
	{
		dest[dest_len++] = src[y++];
	}
	while (y < n)
	{
		dest[dest_len++] = '\0';
	}
	return (dest);
}
