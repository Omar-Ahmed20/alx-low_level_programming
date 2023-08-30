#include "main.h"

/**
 * square - function to calculate the square root
 * @n: number to compare with
 * @i: number to test with if i reached the answer or not
 * Return: -1 if error sqrt if correct input
 */
int square(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (square(n, i + 1));
}
/**
 * _sqrt_recursion - calculate sqrt of number
 * @n: the number
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

