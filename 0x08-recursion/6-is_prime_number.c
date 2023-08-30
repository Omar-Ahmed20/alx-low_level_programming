#include "main.h"

/**
 * is_prime - check if the number is prime
 * @n: number to be checked
 * @i: supporting number
 * Return: 1 if prime 0 if not
 */
int is_prime(int n, int i)
{
	if (n > 1 && i >= n)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	return (is_prime(n, i + 1));
}
/**
 * is_prime_number - check if its prime or not
 * @n: number to be checked
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
