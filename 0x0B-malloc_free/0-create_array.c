#include "main.h"

/**
 * create_array - creating an array
 * @size: size of array
 * @c: to be stored in araay
 * Return: return pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int p;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (p = 0; p < size; p++)
		arr[p] = c;
	return (arr);

}
