#include "lists.h"

/**
 * listint_len - this will return number of elements inlinked list
 *
 * @h: the linked list of type listint_t to be traversed
 * Return: the number of nodes there
 */
size_t listint_len(const listint_t *h)
{
	size_t ogu = 0;

	while (h)
	{
		ogu++;
		h = h->next;
	}

	return (ogu);
}
