#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - it will Print strings, then new line.
 * @separator: string that will be printed between strings.
 * @n: number of strings that passes to the function.
 * @...: variable number of strings that will be printed.
 * Return: If separator is NULL, it's not printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list typ;
	char *broy;
	unsigned int jute;

	va_start(typ, n);

	for (jute = 0; jute < n; jute++)
	{
		broy = va_arg(typ, char *);

		if (broy == NULL)
			printf("(nil)");
		else
			printf("%s", broy);

		if (jute != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(typ);
}
