#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program using sizeof print size of various tybes.
 *
 * Return: Always 0 (succesful)
*/

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("The size of char is %u byte(s).\n", sizeof(a));
	printf("The size of int is %u byte(s).\n", sizeof(b));
	printf("The size of long int is %u byte(s).\n", sizeof(c));
	printf("The size of long long int is %u byte(s).\n", sizeof(d));
	printf("The size of float is %u byte(s).\n", sizeof(e));

return (0);
}
