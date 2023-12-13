#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - it will insert a 
 * new node at the
 * a given position
 * @h: thehead of the lists
 *
 * @idx: theindex of the new nodes
 * @n: thevalue of the new nodes
 * Return: this returns the address of the new 
 * node, or NULL if it will fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *mew;
	dlistint_t *shead;
	unsigned int k;

	mew = NULL;
	if (idx == 0)
		mew = add_dnodeint(h, n);
	else
	{
		shead = *h;
		k = 1;
		if (shead != NULL)
			while (shead->prev != NULL)
				shead = shead->prev;
		while (shead != NULL)
		{
			if (k == idx)
			{
				if (shead->next == NULL)
					mew = add_dnodeint_end(h, n);
				else
				{
					mew = malloc(sizeof(dlistint_t));
					if (mew != NULL)
					{
						mew->n = n;
						mew->next = shead->next;
						mew->prev = shead;
						shead->next->prev = mew;
						shead->next = mew;
					}
				}
				break;
			}
			shead = shead->next;
			k++;
		}
	}

	return (mew);
}
