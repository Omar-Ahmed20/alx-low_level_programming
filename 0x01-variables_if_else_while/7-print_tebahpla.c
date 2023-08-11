#include <stdio.h>

/**
 * main - main function
 * Return: 0 when success else 1
 */
int main(void)
{
	char i = 122;

	while (i > 96)
	{
		putchar(i);
		--i;
	}
	putchar('\n');
	return (0);
}

