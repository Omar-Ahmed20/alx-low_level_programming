#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: array pf all arguments
 * Return: 0 if true 1 if fails
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
