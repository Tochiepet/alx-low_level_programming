#include "main.h"

/**
 * _strdup - will copy the string to memory allocated
 * @str: the string that will bee copied
 * Return: return pointer to free memory
 */

char *_strdup(char *str)
{

	int p;
	char *baln;
	int duq = 0;

	if (str == NULL)
		return (NULL);

	for (p = 0; str[p] != '\0'; p++)
		duq++;
	baln = malloc(sizeof(char) * duq);

	if (baln == NULL)
		return (NULL);
	for (p = 0; str[p] != '\0'; p++)
		baln[p] = str[p];

	return (baln);

}
