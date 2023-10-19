#include "lists.h"

/**
 * print_list - function that prints all the elements of list.
 * @h:pointer to singl linked list
 *
 * Return: the number of list
 */

size_t print_list(const list_t *h)
{
	size_t nod;

	nod = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nod++;
	}
	return (nod);
}
