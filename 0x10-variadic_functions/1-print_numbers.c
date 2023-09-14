#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print all the arguments of the function
 * @separator: charachter the separates the ints
 * @n: number of remaining arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = n;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%d%s", va_arg(ap, int),
				i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
