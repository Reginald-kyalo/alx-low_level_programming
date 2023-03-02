#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string to be compared
 * @s2: with this
 *
 * Return: 15 if dest is bigger than src, -15 the other way
 * and 0 if they are equal in length
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int s1_len = 0;
	int s2_len = 0;

	while (s2[i++])
	{
		s2_len++;
	}
	while (s1[j++])
	{
		s1_len++;
	}

	if (s1_len > s2_len)
	{
		return (15);
	}
	else if (s2_len > s1_len)
	{
		return (-15);
	}
	else if (s2_len == s1_len)
	{
		return (0);
	}

}
