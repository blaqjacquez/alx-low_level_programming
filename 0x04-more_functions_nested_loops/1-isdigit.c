#include "main.h"
#include <stdlib.h>

/**
 * _isdigit - checks for digit
 * @c: parameter name
 * Return: 1 if true 0 if false
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
