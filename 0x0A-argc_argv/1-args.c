#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: number of arguments to the program
 * @argv: array of all arguments
 * Return: 0 always
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
