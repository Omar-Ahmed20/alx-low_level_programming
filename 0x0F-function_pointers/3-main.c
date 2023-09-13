#include "3-calc.h"

/**
 * main - main function of the program
 * @argc: number of arguments
 * @argv: array of all the arguments
 * Return: 0 in success any other number if fails
 */

int main(int argc, char **argv)
{
	int first, second;
	int (*test_f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	first = atoi(argv[1]);
	second = atoi(argv[3]);

	test_f = get_op_func(argv[2]);
	if (!test_f)
	{
		printf("Error\n");
		exit(99);
	}
	if (second == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", test_f(first, second));
	return (0);
}
