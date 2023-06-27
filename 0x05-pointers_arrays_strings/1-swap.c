#include "main.h"
/**
 * swap_int - swaps integers
 * @a: first parameter name
 * @b: second parameter name
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
