#include <stdio.h>

/**
 * main - msadasd
 * Return: 0 if success else 1
 */
int main(void)
{
	unsigned long int num = 612852475143;
	unsigned long int largest = 0;
	unsigned long int i = 2;

	while (i <= num)
	{
		while ((num % i) == 0)
		{
			num = num / i;
			if (i > largest)
				largest = i;
		}
		i++;
	}
	printf("%ld\n", largest);
	return (0);
}
