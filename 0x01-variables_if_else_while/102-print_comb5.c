#include <stdio.h>

/**
 *main - msadasd
 *Return: 0 if success else 1
 */
int main(void)
{
	int i = 0;
	int j;

	while (i < 100)
	{
		j = i;
		while (j < 100)
		{
			if (j != i)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
