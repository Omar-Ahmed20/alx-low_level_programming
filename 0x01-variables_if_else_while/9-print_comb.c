#include <stdio.h>

/**
 * main - main function
 * Return: 0 when success else 1
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i == 9)
		{
			++i;
			continue;
		}
		else
		{
		putchar(',');
		putchar(' ');
		++i;
		}
	}
	putchar('\n');
	return (0);
}

