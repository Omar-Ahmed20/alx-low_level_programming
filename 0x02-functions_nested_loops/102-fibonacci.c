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

	printf("%f, %f, ", a, b);
	while (count < 51 )
	{
		c = a + b;
		printf("%f, ", c);
		a = b;
		b = c;
		count++;
	}
	printf("\n");
	return (0);
}
