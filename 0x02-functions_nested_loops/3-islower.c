#include "main.h"
/**
 * _islower - checks if character is lower case
 *
 * @c: the character of ASCII code
 *
 * Return: 1 if yes, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
