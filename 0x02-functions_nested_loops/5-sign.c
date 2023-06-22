#include "main.h"
/**
 * print_sign - prints the number of a sign
 *
 * @n: is the character of ASCII code
 *
 * Return: 1 if greater than 0 if equal to and -1 if less than
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		return (0);
	}
}

