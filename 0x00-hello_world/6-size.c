#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	printf("sizes of a char: %ld byte(s)\n", sizeof(char));
	printf("sizes of an int: %ld byte(s)\n", sizeof(int));
	printf("sizes of a long int: %ld byte(s)\n", sizeof(long int));
	printf("sizes of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("sizes of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
