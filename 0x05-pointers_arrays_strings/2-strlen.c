#include "main.h"
/**
 * _strlen - shows string lenght
 * @s: parameter name
 * Return: Always 0 (success)
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return length;
}
