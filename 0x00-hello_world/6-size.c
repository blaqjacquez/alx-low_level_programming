#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	printf("sizes of char: %ld byte(s)\n", sizeof(char));
	printf("sizes of int: %ld byte(s)\n", sizeof(int));
	printf("sizes of long int: %ld byte(s)\n", sizeof(long int));
	printf("sizes of long long int: %ld byte(s)\n", sizeof(long long int));
	printf("sizes of float: %ld byte(s)\n", sizeof(float));
	return (0);
}
