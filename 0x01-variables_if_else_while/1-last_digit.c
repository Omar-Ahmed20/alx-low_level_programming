#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *main - print last digit
 *Return: 0 when success else 1
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lst_dg = n % 10;
	if (lst_dg > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lst_dg);
	else if (lst_dg == 0)
		printf("Last digit of %d is %d and is 0\n", n, lst_dg);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst_dg);
	return (0);
}
