#include <stdio.h>
/**
 *
 *
 *
 */
int main(void)
{
	double a = 1;
	double b = 2;
	double c;
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
