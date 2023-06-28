#include "main.h"
#include <stdio.h>
/**
 * print_rev - print string in reverse
 * @s: parameter name
 */
void print_rev(char *s)
{
	int length = 0;

	if (s == NULL)
		return;
	while (s[length] != '\0')
		length++;
	for (int i = length - 1; i >= 0; i--)
		putchar(s[i]);
	putchar('\n');
}
