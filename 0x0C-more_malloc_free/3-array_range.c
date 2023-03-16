#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates array of numbers starting
 *		from min to max
 * @min: starting point
 * @max: end point
 *
 * Return: pointer to array if successful
 *		NULL on failure
 */
int *array_range(int min, int max)
{
	int i = 0, *array, size;

	if (min > max)
		return (NULL);
	size = ((max - min) + 1);
	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	while (i < size)
	{
		array[i] = min++;
		i++;
	}

	return (array);
}
