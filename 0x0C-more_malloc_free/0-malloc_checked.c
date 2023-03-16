#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory of size b
 * @b: size
 *
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *memory = malloc(b);

	if (memory == NULL)
	{
		exit(98);
	}
}
