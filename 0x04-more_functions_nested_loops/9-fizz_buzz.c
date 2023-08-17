#include "main.h"
#include <stdio.h>

/**
 * main - print fizz buzz
 * Return: 0 when success
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
			if (i != 100)
				printf(" ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			if (i != 100)
				printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			if (i != 100)
				printf(" ");
		}
		else
		{
			printf("%d", i);
			if (i != 100)
				printf(" ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
