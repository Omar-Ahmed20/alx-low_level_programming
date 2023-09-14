#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print all string arguments
 * @separator: the separator between two strings
 * @n: number of remainder arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i = n;
	char *s;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
	{
		printf("%s%s", (s = va_arg(ap, char *)) ? s : "(nil)",
				i ? (separator ? separator : "") : "\n");
	}
	va_end(ap);
}
