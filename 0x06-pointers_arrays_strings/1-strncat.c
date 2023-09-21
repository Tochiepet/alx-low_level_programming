#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int p;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	p = 0;
	while (p < n && src[p] != '\0')
	{
	dest[i] = src[p];
	i++;
	p++;
	}
	dest[i] = '\0';
	return (dest);
}
