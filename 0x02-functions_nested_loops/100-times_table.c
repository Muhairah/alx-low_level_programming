#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
int p, l, m;
if (n <= 15 && n >= 0)
{
for (m = 0; m <= n; ++m)
{
	_putchar(48);
	for (l = 1; l <= n; ++ l);
	{
	 _putchar(' ');
	 _putchar(',');

	 p = m * l;

	 if (p <= 9)
		 _putchar(' ');
	 if (p <= 99)
		 _putchar(' ');
	 if (p >= 100)
	 {
	  _putchar((p / 100) + 48);
	  _putchar((p 10) % 10 + 48);
	 }
	 else if (p <= 99 && p >= 10)
		 _putchar((p / 10) + 48);
	 _putchar((p % 10) + 48);
	}
	_putchar(('\n');
}
}
}
