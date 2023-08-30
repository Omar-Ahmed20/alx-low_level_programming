#include "main.h"

/**
 * factorial - calculate value of factorial
 * @n: number to make the process
 * Return: -1 if error , value of factorial if correct input
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
