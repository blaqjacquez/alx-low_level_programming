#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: parameter name
 *
 */
void rev_string(char *s)
{
	int length = 0;
	int i, j;
	char temp;

	if (s == NULL)
		return;
	while (s[length] != '\0')
		length++;
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
