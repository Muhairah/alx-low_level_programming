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
	int n, m;

	for (n = 0; n <= 98; n++)
	{
		for (m = n + 1; m <= 99; m++)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			putcar(' ');
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			if (n != 98 || m != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
