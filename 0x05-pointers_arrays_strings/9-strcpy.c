#include "main.h"
#include <stdio.h>
/**
 * _strcpy- converts string to integer
 * @dest: parameter name
 * @src: parameter name
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
