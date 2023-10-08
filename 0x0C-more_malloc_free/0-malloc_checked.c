#include"main.h"
/**
 * malloc- function that allocates memory using malloc
 * @b: number of bytes
 *
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{

	void *n;

	n = malloc(b);

	if (n == NULL)
		exit(98);

	return (n);
}
