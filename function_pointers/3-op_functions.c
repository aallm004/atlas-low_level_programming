#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - returns the sum of a and b
 * @a: int to be added
 * @b: int to be added
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: int to be used in subtraction
 * @b: int to be used in subtraction
 * Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the difference of a and b
 * @a: int to be used in multiplication
 * @b: int to be used in multiplication
 * Return: int
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the division of a and b
 * @a: int to be used in division
 * @b: int to be used in division
 * Return: int
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_ - returns the remainder of a divided by b
 * @a: int to be used in division
 * @b: int to be used in division
 * Return: int
 */

int op_mod(int a, int b)
{
	return (a % b);
}
