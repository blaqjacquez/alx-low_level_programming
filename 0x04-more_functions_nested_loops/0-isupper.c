#include "main.h"
#include <stdlib.h>

/**
 * _isupper - checks for uppercase
 *
 * @c: parameter name
 *
 * Return: 1 if true 0 if false
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
