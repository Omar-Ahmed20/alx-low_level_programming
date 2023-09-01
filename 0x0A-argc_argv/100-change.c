#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculate the chenge of money
 * @argc: number of arguments to main
 * @argv: array of pointers to all arguments
 * Return: 1 if error 0 if success
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int i = 0, min = 0;
		int money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		while (i < 5)
		{
			if (money >= cents[i])
			{
				min += money / cents[i];
				if (money % cents[i] == 0)
					break;
				money = money % cents[i];
			}
			i++;
		}
		printf("%d\n", min);
		return (0);
	}
}
