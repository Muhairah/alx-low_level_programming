#include <stdio.h>
#include <limits.h>
#include <float.h>

/**
 * main - Entry point
 *
 * Description: A C program using sizeof print size of various tybes.
 *
 * Return: Always 0 (succesful)
 */

int main(void)
{
	printf("The size of char is %u byte(s).\n", sizeof(char));
	printf("The size of int is %u byte(s).\n", sizeof(int));
	printf("The size of long int is %u byte(s).\n", sizeof(long int));
	printf("The size of long long int is %u byte(s).\n", sizeof(long long int));
	printf("The size of float is %u byte(s).\n", sizeof(float));

return (0);
}
