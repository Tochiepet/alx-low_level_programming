#include "lists.h"

/**
 * print_listint - this will print elements of linked lists
 *
 * @h: linked list of type listito prints
 * Return: it will  the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t hirt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		hirt++;
		h = h->next;
	}

	return (hirt);
}
