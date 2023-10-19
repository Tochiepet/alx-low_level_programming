#include <stdio.h>
#include "lists.h"

/**
 * print_list -this will print all the elements of the list
 * @h: this is pointer to the list to be print
 * Return: it will return number of nodes to be printed
 */
size_t print_list(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		k++;
	}

	return (k);
}
