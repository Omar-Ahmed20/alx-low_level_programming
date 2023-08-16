#include <stdio.h>
/**
 *
 *
 *
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int c;
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
	return (0);
}
