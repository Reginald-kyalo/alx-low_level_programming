#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates s1 and n bytes of s2
 * @s1: input
 * @s2: another input
 * @n: bytes
 *
 * Return: pointer to array if success
 * NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0;
	int s1_len = 0, s2_len = 0;
	char *array;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[s1_len] != '\0')
	{
		s1_len++;
	}
	while (s2[s2_len] != '\0')
	{
		s2_len++;
	}
	if (s2_len > n || s2_len == n)
	{
		s2_len = n;
	}
	array = malloc(sizeof(char) * (s1_len + s2_len));
	if (array == NULL)
		return (NULL);
	while (i < s1_len)
	{
		array[i] = s1[i];
		i++;
	}
	while (j < s2_len)
	{
		array[i] = s2[j];
		j++;
		i++;
	}
	array[i] = '\0';
	return (array);
}
