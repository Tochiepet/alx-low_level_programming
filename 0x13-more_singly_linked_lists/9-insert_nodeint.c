#include "lists.h"

/**
 * insert_nodeint_at_index - will insert new node in linked list,
 * at given positions
 *
 * @head: the pointer to first node in list
 * @idx: the index where new node is added
 * @n: its data to insert in the new node
 * Return: will return pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *ohu;
	listint_t *mum = *head;

	ohu = malloc(sizeof(listint_t));
	if (!ohu || !head)
		return (NULL);

	ohu->n = n;
	ohu->next = NULL;

	if (idx == 0)
	{
		ohu->next = *head;
		*head = ohu;
		return (ohu);
	}

	for (k = 0; mum && k < idx; k++)
	{
		if (k == idx - 1)
		{
			ohu->next = mum->next;
			mum->next = ohu;
			return (ohu);
		}
		else
			mum = mum->next;
	}

	return (NULL);
}
