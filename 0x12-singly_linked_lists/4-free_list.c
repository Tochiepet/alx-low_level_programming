#include <stdlib.h>
#include "lists.h"

/**
 * free_list - will free the linked list
 * @head: the list that will be freed
 */
void free_list(list_t *head)
{
	list_t *greb;

	while (head)
	{
		greb = head->next;
		free(head->str);
		free(head);
		head = greb;
	}
}
