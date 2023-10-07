#include "main.h"
int actual_prime(int n, int i);
/**
 * is_prime_number - finds the prime number of n
 * @n: number whose prime number is to be found
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - recurses to find the prime of a number
 * @n: number whose prime is to be found
 * @i: iterator
 * Return: 1 if n is a prime number, 0 if not
 */

int actual_prime(int n, int i)
{
	if ((n % i) == 0 && i > 0)
		return (0);
	if (i == 1)
		return (1);
	else
		return (actual_prime(n, i - 1));
}
