#include <stdio.h>

/**
 * main - print all arguments of the program
 * @argc: number of arguments
 * @argv: array of pointers to all arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
