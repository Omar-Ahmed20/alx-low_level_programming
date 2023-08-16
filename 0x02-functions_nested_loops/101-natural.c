#include <stdio.h>
/**
 * main - sum of factorials
 * Return: 0 when success
 */
int main(void)
{
	int i = 1024;
	int sum = 0;

	while (i > 0)
	{
		if ((i % 3  == 0) || (i % 5 == 0))
		{
			sum += i;
		}
		i--;
	}
	printf("%d\n", sum);
	return (0);
}
