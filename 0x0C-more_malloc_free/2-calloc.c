#include "main.h"
#include <stdlib.h>
/**
 * _calloc - if malloc placed themselves in calloc's shoes
 * @nmemb: number of elements
 * @size: size of elements
 *
 * Return: pointer on success, NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		array[i] = 0;

	return (array);
}
