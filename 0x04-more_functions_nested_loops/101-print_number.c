#include "main.h"
/**
 *
 *
 */

void print_number(int n)
{
	int i = 0;
	int size = 0;
	int f = 10;
	int f2 = 10;

	while((n % f) != n)
	{
		size++;
		f*=10;
	}
	while (i < size)
	{
		_putchar((n / 10) + '0');
	}
}
