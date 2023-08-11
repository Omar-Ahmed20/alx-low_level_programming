#include <stdio.h>

/**
 * main - main function
 * Return: 0 when success else 1
 */
int main(void)
{
	char i = 97;

	while (i < 123)
	{
		if (i == 113 || i == 101)
		{
			++i;
			continue;
		}
		else
		{
			putchar(i);
			++i;
		}
	}
	putchar('\n');
	return (0);
}

