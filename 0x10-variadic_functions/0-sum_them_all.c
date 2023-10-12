#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - this will return the sum of all the paramters.
 * @n: number of paramters that will passe to the function.
 * @...: it is the variable number of paramters that will calculate the sum
 * Return: will retur, If n == 0 - 0. else, the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list gan;
	unsigned int k, sum = 0;

	va_start(gan, n);

	for (k = 0; k < n; k++)
		sum += va_arg(gan, int);

	va_end(gan);

	return (sum);
}
