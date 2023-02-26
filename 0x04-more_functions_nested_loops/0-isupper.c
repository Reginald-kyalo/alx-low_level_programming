#include "main.h"

/**
 * _isupper - checks for uppercse chaacter
 *
 * @c: to be checked
 * Return: 0 failure
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
