#include <stdio.h>

/**
 * main - main function
 * Return: 0 when success else 1
 */
int main(void)
{
	char i = 97;
	char j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	while (j < 100)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}

