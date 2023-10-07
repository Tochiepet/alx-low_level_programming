#include "main.h"
#include <stdlib.h>
/**
 * argstostr - this is the entry point
 * @ac:the  integer input
 * @av: this is 2 pointer array
 * Return: will return 0
 */
char *argstostr(int ac, char **av)
{
	int q, f, p = 0, j = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (q = 0; q < ac; q++)
	{
		for (f = 0; av[q][f]; f++)
			j++;
	j += ac;
	}

	str = malloc(sizeof(char) * j + 1);
	if (str == NULL)
		return (NULL);
	for (q = 0; q < ac; q++)
	{
	for (f = 0; av[q][f]; f++)
	{
		str[p] = av[q][f];
		p++;
	}
	if (str[p] == '\0')
	{
		str[p++] = '\n';
	}
	}
	return (str);
}
