#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	printf("sizes of char: %ld byte(s)", sizeof(char));
	printf("sizes of int: %ld byte(s)", sizeof(int));
	printf("sizes of long int: %ld byte(s)", sizeof(long int));
	printf("sizes of long long int: %ld byte(s)", sizeof(long long int));
	printf("sizes of float: %ld byte(s)", sizeof(float));
	return (0);
}
