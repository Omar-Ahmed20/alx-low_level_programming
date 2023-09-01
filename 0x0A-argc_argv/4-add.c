#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers only
 * @argc: number of arguments
 * @argv: array of all arguments
 * Return: 0 when success 1 if fails
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;

	while (i < argc)
	{
		if (atoi(argv[i]) <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
