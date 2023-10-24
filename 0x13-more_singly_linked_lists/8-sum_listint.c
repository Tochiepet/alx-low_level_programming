#include "lists.h"

/**
 * sum_listint - will calculates the sum of all data in listint_t lists
 *
 * @head: the first node in the linked lists
 * Return: will return the resulting sum
 */
int sum_listint(listint_t *head)
{
	int num = 0;
	listint_t *klin = head;

	while (klin)
	{
		num += klin->n;
		klin = klin->next;
	}

	return (num);
}
