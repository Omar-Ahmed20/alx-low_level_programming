#include <stdio.h>

/**
 *main - main function
 *Return: 0 when success else 1
 */
int main(void)
{
	char i = 48;

	while (i < 103)
	{
		putchar(i);
		if (i == 57)
			i += 40;
		else
			i++;
	}
	putchar('\n');
	return (0);
}
