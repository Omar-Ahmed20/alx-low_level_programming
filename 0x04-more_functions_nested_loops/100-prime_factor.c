#include <stdio.h>

/**
 * main - msadasd
 * Return: 0 if success else 1
 */
int main(void)
{
	long long int num = 612852475143;
	long int largest = 0;
	int i = 2;

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
	printf("%ld", largest);
	return (0);
}
