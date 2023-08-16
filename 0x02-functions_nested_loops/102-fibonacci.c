#include <stdio.h>
/**
 *
 *
 *
 */
int main(void)
{
	unsigned int a = 1;
	unsigned int b = 2;
	unsigned int c;
	int count = 2;

	printf("%d, %d, ", a, b);
	while (count < 51 )
	{
		c = a + b;
		printf("%d, ", c);
		a = b;
		b = c;
		count++;
	}
	printf("\n");
	return (0);
}
