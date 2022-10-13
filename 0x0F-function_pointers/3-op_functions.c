#include "3-calc.h"

/**
 * op_add - calculates the sum of two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of two integers
 * @a: first integer
 * @b: second integer
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of two integers
 *
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two numbers
 * @a: int 1
 * @b: int 2
 *
 * Return: Returns result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Modules two numbers
 * @a: int 1
 * @b: int 2
 *
 * Return: Returns result
 */
int op_mod(int a, int b)
{
	return (a % b);
}