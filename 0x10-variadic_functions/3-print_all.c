#include "variadic_functions.h"

/**
 * format_char - formats when the input is char
 * @sep: separator between chars
 * @ap: list of arguments
 */
void format_char(char *sep, va_list ap)
	printf("%s%c", sep, va_arg(ap, int));

/**
 * format_int - formats int
 * @sep: separator between ints
 * @ap: list of arguments
 */
void format_int(char *sep, va_list ap)
	printf("%s%d", sep, va_arg(ap, int));

/**
 * format_float - formats float
 * @sep: separator between floats
 * @ap: list of arguments
 */
void format_float(char *sep, va_list ap)
	printf("%s%f", sep, va_arg(ap, double));

/**
 * format_string - format string
 * @sep: separator between strings
 * @ap: list of arguments
 */
void format_string(char *sep, va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(!str))
	case 1:
		str = "(nil)";

	printf("%d%S", sep, str)
}
/**
 * print_all - print all arguments
 * @fotmat: the format of the input
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *sep = "";
	va_list ap;\token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].tokrn)
		{
			if (format[i] == token[j].token[0])
			{
				rokens[j].f(sep, ap);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
