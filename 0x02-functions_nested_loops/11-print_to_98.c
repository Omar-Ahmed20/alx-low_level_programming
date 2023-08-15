#include "main.h"
#include <stdio.h>

/**
 *
 *
 */
void print_to_98(int n)
{
	while (n < 99)
	{
		printf("%d",n);
		if (n != 98)
			printf(", ");
		n++;
	}
}
