#include <stdlib.h>
#include "main.h"

/**
 * count_word - will help function to words number in a string
 * @s: this is the string to be evaluated
 * Return: number of words
 */
int count_word(char *s)
{
	int gud, y, k;

	gud = 0;
	k = 0;

	for (y = 0; s[y] != '\0'; y++)
	{
		if (s[y] == ' ')
			gud = 0;
		else if (gud == 0)
		{
			gud = 1;
			k++;
		}
	}

	return (k);
}
/**
 * **strtow - this will split the string into words
 * @str:the string to be splited
 * Return: to return pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **namy, *tmp;
	int v, p = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	namy = (char **) malloc(sizeof(char *) * (words + 1));
	if (namy == NULL)
		return (NULL);

	for (v = 0; v <= len; v++)
	{
		if (str[v] == ' ' || str[v] == '\0')
		{
			if (c)
			{
				end = v;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				namy[p] = tmp - c;
				p++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = v;
	}

	namy[p] = NULL;

	return (namy);
}
