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

	while (--argc)
	{
		char *cha = argv[argc];

		while (*cha)
		{
			if (*cha < '0' || *cha > '9')
			{
				printf("Error\n");
				return (1);
			}
			cha++;
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
