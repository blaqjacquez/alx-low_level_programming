#include "main.h"
/**
 * _abs - checks for the absolute number of an integer
 *
 * @n: an integer
 *
 * Return: always -n if true n if false
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
