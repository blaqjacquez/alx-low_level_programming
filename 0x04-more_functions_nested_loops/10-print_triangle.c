#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Prints a triangle in the terminal
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= i; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
