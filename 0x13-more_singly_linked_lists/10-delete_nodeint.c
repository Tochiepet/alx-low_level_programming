#include "lists.h"

/**
 * delete_nodeint_at_index - this will delete node inlinked list at atindexes
 * @head: the pointer tothe 1st element the lists
 *
 * @index: the index of node to be deleted
 * Return: will return1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *hill = *head;
	listint_t *oku = NULL;
	unsigned int p = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(hill);
		return (1);
	}

	while (p < index - 1)
	{
		if (!hill || !(hill->next))
			return (-1);
		hill = hill->next;
		p++;
	}


	oku = hill->next;
	hill->next = oku->next;
	free(oku);

	return (1);
}
