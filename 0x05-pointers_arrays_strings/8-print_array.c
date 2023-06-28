#include "main.h"
#include <stdio.h>
/**
 * print_array - prints an array
 * @a: parameter name
 * @n: array element
 */
void print_array(int *a, int n)
{
	int i;

	if (a == NULL || n <= 0)
		return;
	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);
}
