#include <stdio.h>
/**
 * main- main function fabnoci numbers
 * Return: 0 when success
 */
int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long c;
	unsigned long sum = 2;

	printf("%ld, %ld, ", a, b);
	while (1)
	{
		c = a + b;
		if (c > 4000000)
			break;
		sum += c;
		a = b;
		b = c;
	}
	printf("%ld", sum);
	return (0);
}
