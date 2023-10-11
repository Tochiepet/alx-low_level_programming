#include "function_pointers.h"
/**
 * int_index - it wili return index place if (comparison = true), else -1
 * @array: it is the array of the funtion
 * @size: this is the size of elements in the array
 * @cmp: the pointer to function of 1 of 3 in the main
 * Return: will return nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]))
			return (k);
	}
	return (-1);
}
