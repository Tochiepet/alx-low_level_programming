#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - it will return the number of elements
 * @h: this is the head of the lists
 * Return: this will return the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int ogugu;

	ogugu = 0;

	if (h == NULL)
		return (ogugu);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		ogugu++;
		h = h->next;
	}

	return (ogugu);
}
