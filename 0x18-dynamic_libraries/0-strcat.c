#include "main.h"

/**
 * _strcat - concatenates two strings src
 * to dest
 * @dest: string to be appended
 * @src: appends to dest
 *
 * Return: pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int y = 0;
	int x = 0;
	int dest_len = 0;

	while (dest[x++])
	{
		dest_len++;
	}
	y = 0;
	while (src[y])
	{
		dest[dest_len++] = src[y++];
	}
	return (dest);
}
