#include <stdio.h>

/**
 *main - msadasd
 *Return: 0 if success else 1
 */
int main(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		while (j < 10)
		{
			if (i == j || i > j)
			{
				j++;
				continue;
			}
			putchar(i + '0');
			putchar(j + '0');
			if ( i == 8 && j == 9)
			{
				j++;
				putchar('\n');
				continue;
			}
			else
			{
				putchar(',');
				putchar(' ');
				j++;
			}
		}
		i++;
		j=0;
	}
	return (0);
}
