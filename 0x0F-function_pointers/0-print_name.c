#include "function_pointers.h"
/**
 * print_name - print name dy pointer to function
 * @name: string
 * @f: pointer to function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
		return;
	f(name);
}
