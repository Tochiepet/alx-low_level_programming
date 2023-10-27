#include "main.h"

/**
 * get_endianness - this checks if a machine is little or big endian
 * Return: this will return 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int g = 1;
	char *k = (char *) &g;

	return (*k);
}
