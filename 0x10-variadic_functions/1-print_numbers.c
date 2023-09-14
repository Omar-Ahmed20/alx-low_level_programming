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
	unsigned int i = 0;

	va_start(ap, n);
	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		i++;
		if (separator && (i < n))
			printf("%c ", *separator);
	}
	printf("\n");
	va_end(ap);
}
