#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: A C program print the value of n status.
 *
 * Return: Always 0 (succesful)
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	printf("Last digit 0f %d is %d", n, last_digit);

	if (last_digit  > 5)
		printf("and is grater than 5\n");
	else if (last_digit  == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");
	return (0);
}
