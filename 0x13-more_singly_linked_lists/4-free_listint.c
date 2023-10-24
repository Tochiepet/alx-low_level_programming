#include "lists.h"

/**
 * free_listint - it frees a linked lists
 * @head: the listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *ohu;

	while (head)
	{
		ohu = head->next;
		free(head);
		head = ohu;
	}
}
