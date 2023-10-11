#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - returns sum of a and b
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference btn a and b
 * @a: first number
 * @b: second number
 * Return: differnce btn a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns product of a and b
 * @a: first number
 * @b: second number
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a and b
 * @a: first number
 * @b: second number
 * Return: result of division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the result of the remainder of division of a and b
 * @a: first number
 * @b: second number
 * Return: result of the remainder of division of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
