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
	int count = 2;

	printf("%ld, %ld, ", a, b);
	while (count < 50)
	{
		c = a + b;
		printf("%ld", c);
		if (count != 49)
			printf(", ");
		a = b;
		b = c;
		count++;
	}
	printf("\n");
	return (0);
}
