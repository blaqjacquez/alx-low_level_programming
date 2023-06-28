#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string
 * @str: parameter name
 */
void puts_half(char *str)
{
	int length = 0;
	int i, start_index;

	if (str == NULL)
		return;

	while (str[length] != '\0')
		length++;

	start_index = (length + 1) / 2;

	for (i = start_index; str[i] != '\0'; i++)
		putchar(str[i]);
	putchar('\n');

}
