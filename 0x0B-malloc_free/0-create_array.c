#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array
 * @size: size of array
 * @c: input
 * Return: pointer to array if succesful,
 *		null if failure
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	array = (char *) malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	if (size != 0)
	{
		while (i < size)
		{

			array[i] = c;
			i++;
		}
		array[i] = '\0';
		return (array);
	}
	return (NULL);
}
