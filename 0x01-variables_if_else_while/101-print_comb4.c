#include <stdio.h>

/**
 *main - msadasd
 *Return: 0 if success else 1
 */
int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (i < 10)
	{
		while (j < 10)
		{
			while (k < 10)
			{
				if (i == j || i > j ||  i == k || j == k || i > k)
				{
					k++;
					continue;
				}
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i == 7 && j == 8 && k == 9)
				{
					k++;
					putchar('\n');
					continue;
				}
				else
				{
					putchar(',');
					putchar(' ');
					k++;
				}
			}
			j++;
			k = 0;
		}
		i++;
		j = 0;
	}
	return (0);
}

