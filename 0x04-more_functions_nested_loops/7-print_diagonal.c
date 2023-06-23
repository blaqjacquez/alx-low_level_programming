#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - Draws a straight line in the terminal
 * @n: The number of times the character '_' should be printed
 */
void print_diagonal(int n)
{
	int i, spaces;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (spaces = 0; spaces < i; spaces++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}
}
