#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two integers
 * @a: integer one
 * @b: integer two
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two integers
 * @a: integer one
 * @b: integer two
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a: integer one
 * @b: integer two
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two integers
 * @a: integer one
 * @b: integer two
 * Return: int
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - find the modulus of two integers
 * @a: integer one
 * @b: integer two
 * Return: int
 */
int op_mod(int a, int b)
{
	return (a % b);
}
