#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - it will Print numbers, followed by a new line.
 * @separator:this is the string to be printed between numbers.
 * @n: number of integersthat will passe to the function.
 * @...: the variable number of numbers that will be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list byte;
	unsigned int mogs;

	va_start(byte, n);

	for (mogs = 0; mogs < n; mogs++)
	{
		printf("%d", va_arg(byte, int));

		if (mogs != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(byte);
}
