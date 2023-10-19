#include <stdlib.h>
#include "lists.h"

/**
 * list_len - number of elements in linked list to the retured
 * @h: this is a pointer to list
 * Return: this will return the elements' nuumber in h
 */
size_t list_len(const list_t *h)
{
	size_t p = 0;

	while (h)
	{
		p++;
		h = h->next;
	}
	return (p);
}
