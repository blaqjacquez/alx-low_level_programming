#include "main.h"
#include <stdio.h>
/**
 * more_numbers - printing more numbers using nested loops
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; i++)
		{
			putchar (j + '0');
		}
		putchar(i + '0');
	}
	putchar('\n');
}
