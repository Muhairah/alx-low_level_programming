#include <stdio.h>
#include "list_h"

/**
 * print_list - function that prints all the elements of list.
 * @h: pointer to list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
		return (count);
}
