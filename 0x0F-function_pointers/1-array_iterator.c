#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - this will print each array element on a newline
 * @array: it is an array
 * @size: it's how many elements to print
 * @action: this pointer will to print in regular or hexadecimal
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int q;

	if (array == NULL || action == NULL)
		return;

	for (q = 0; q < size; q++)
	{
		action(array[q]);
	}
}
