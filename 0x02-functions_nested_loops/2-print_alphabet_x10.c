#include "main.h"
/**
 * print_alphabet_x10 - entry point
 *
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
	int f, m;

{
	for (m = 0; f <= 10; f++)
	{
		for (m = 97; m <= 122; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}
