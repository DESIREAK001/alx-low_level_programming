#include "main.h"
int actual_prime(int n, int i);
/**
 * is_prime_number - finds the prime number of n
 * @n: number whose prime number is to be found
 * Return: prime number of n
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	return (actual_prime(n, 0));
}

/**
 * actual_prime - recurses to find the prime of a number
 * @n: number whose prime is to be found
 * @i: iterator
 * Return: prime number of n
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
