#include "function_pointers.h"

/**
 * array_iterator - elemnt of array
 * @array: array
 * @size: size of array
 * @action: pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

	unsigned int s;

	if (array == NULL || action == NULL)
		return;

	for (s = 0; s < size; s++)
	{
	action(array[s]);
	}
}
