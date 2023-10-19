#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - this wil add new node at the linked list
 * @head: this is double pointer to list
 * @str: this is string to be added in  node
 * Return: it will return address of element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *hary;
	unsigned int len = 0;

	while (str[len])
		len++;

	hary = malloc(sizeof(list_t));
	if (!hary)
		return (NULL);

	hary->str = strdup(str);
	hary->len = len;
	hary->next = (*head);
	(*head) = hary;

	return (*head);
}
