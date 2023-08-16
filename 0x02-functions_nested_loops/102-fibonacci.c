#include <stdio.h>
/**
 *
 *
 *
 */
int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long c;
	int count = 2;

	printf("%ld, %ld, ", a, b);
	while (count < 50 )
	{
		c = a + b;
		printf("%ld, ", c);
		a = b;
		b = c;
		count++;
	}
	printf("\n");
	return (0);
}
