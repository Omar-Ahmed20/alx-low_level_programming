#include "main.h"
#include <stdio.h>

/**
 *
 *
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ",n);
			n++;
		}
		printf("%d\n",98);
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ",n);
			n--;
		}
		printf("%d\n",98);
	}
	else
		printf("%d\n",98);
}
