#include "function_pointers.h"

/**
 * print_name - print out name
 * @name: the name to be printed
 * @f: pointer to a function that print name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		if (name)
			f(name);
}
