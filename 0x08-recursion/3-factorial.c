#include "main.h"

/**
 * factorial - finds the factorial of a number
 * @n: number whose factorial is to be calculated
 *Return: factorial of a number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * (factorial(n - 1)));
}
