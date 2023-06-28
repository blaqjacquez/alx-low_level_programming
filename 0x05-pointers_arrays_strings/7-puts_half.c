#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string
 * @str: parameter name
 */
void puts_half(char *str)
{
	if (str == NULL)
		return;

	int length = 0;
	int i, start_index;

	while (str[length] != '\0')
		length++;

	start_index = (length + 1) / 2;

	for (i = start_index; str[i] != '\0'; i++)
		putchar(str[i]);
	putchar('\n');

}
