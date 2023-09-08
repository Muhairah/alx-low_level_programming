#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program using sizeof
 *
 * Return: Always 0 (succesful)
 */

int main(void)
{

	printf("size of a char: %lu byte(s)\n", sizeof (char));
	printf("size of a int: %lu byte(s)\n", sizeof (int));
	printf("size of a double: %lu byte(s)\n", sizeof (double));
	printf("size of a long int: %lu byte(s)\n", sizeof (long int));
	printf("size of a long long int: %lu byte(s)\n", sizeof (long long int));
	printf("size of a float: %lu byte(s)\n", sizeof (float));

	return (0);
}
