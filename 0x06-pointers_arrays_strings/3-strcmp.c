#include "main.h"

/**
 * _strcmp - compares two strings
 * @dest: string to be compared
 * @src: with this
 *
 * Return: 15 if dest is bigger than src, -15 the other way
 * and 0 if they are equal in length
 */

char _strcmp(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int dest_len = 0;
	int src_len = 0;

	while (src[i++])
	{
		src_len++;
	}
	while (dest[j++])
	{
		dest_len++;
	}

	if (dest_len > src_len)
	{
		return (15);
	}
	else if (src_len > dest_len)
	{
		return (-15);
	}
	else if (src_len == dest_len)
	{
		return (0);
	}

}
