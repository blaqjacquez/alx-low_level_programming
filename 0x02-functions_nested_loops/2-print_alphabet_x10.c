#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int i, j;
	char lowercase = 'a';

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(lowercase);
			lowercase++;
		}
		_putchar('\n');
		lowercase = 'a';
	}
}
