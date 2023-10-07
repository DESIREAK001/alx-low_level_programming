#include "main.h"

int actual_recursion(int n, int i);

/**
 * _sqrt_recursion - finds the natural square of a number
 * @n: number whose natural square is to be found
 * Return: the natural square of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_recursion(n, 0));
}

/**
 * actual_recursion - recurses to find the square root of a number
 * @n: number whose natural square is to be found
 * @i: iterator
 * Return: the natural square of a number
 */
int actual_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	else
		return (actual_recursion(n, i + 1));
}
