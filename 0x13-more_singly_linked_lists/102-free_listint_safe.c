#include "lists.h"

/**
 * free_listint_safe - will free the linked lists
 *
 * @h: the pointer tothe 1st node the linked lists
 * Return: will return number of elements in the freed lists
 */
size_t free_listint_safe(listint_t **h)
{
	size_t olog = 0;
	int nti;
	listint_t *lime;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		nti = *h - (*h)->next;
		if (nti > 0)
		{
			lime = (*h)->next;
			free(*h);
			*h = lime;
			olog++;
		}
		else
		{
			free(*h);
			*h = NULL;
			olog++;
			break;
		}
	}

	*h = NULL;

	return (olog);
}
