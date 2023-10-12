#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum of pramiter
 * @n: number of prameter
 * @...: variable number
 *
 * Return: 0 if n == 0 other the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int x, sum = 0;

	va_start(ptr, n);
	while (x < n)
	{
		sum += va_arg(ptr, int);
		x++;
	}
	va_end(ptr);
	return (sum);
}
