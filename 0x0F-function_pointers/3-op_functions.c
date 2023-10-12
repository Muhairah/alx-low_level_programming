# include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sum of numbers
 * @a: number one
 * @b: number tow
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b);
{

	return (a + b);
}
/**
 * op_sub - defferance of numbers
 * @a: number one
 * @b: number tow
 *
 * Return: the diffrance of a and b
 */
int op_sub(int a, int b);
{

	return (a - b);
}
/**
 * op_mul - prouduct of numbers
 * @a: number one
 * @b: number tow
 *
 * Return: the prouduct of a and b
 */

int op_mul(int a, int b);
{

	return (a * b);
}
/**
 * op_div - division of numbers
 * @a: number one
 * @b: number tow
 *
 * Return: the division of a and b
 */
int op_div(int a, int b);
{

	return (a / b);
}
/**
 * op_mod - remainder of division of numbers
 * @a: number one
 * @b: number tow
 *
 * Return: the remainder of division of a and b
 */
int op_mod(int a, int b);
{

	return (a % b);
}
