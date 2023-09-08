#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program using sizeof print size of various tybes.
 *
 * Return: Always 0 (succesful)
 */

int main(void)
{

	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		--ch;
	}
	putchar('\n');

	return (0);
}
