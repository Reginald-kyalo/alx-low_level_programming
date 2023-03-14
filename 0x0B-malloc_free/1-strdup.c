#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates array
 * @str: array to be duplicated
 *
 * Return: array
 */

char *_strdup(char *str)
{
	int i = 0;
	int str_len = 0;
	char *array;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
		str_len++;
	}
	str_len++;
	array = malloc(str_len * sizeof(char));
	if (str_len != 0)
	{
		i = 0;
		while (i < str_len)
		{

			array[i] = str[i];
			i++;
		}
		array[i] = '\0';
		return (array);
	}
	return (NULL);
}
