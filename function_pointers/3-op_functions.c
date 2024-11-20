#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Add two integers
 * @a: first integer
 * @b: integer
 * Return: Sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtraction two integers
 * @a: first integer
 * @b: second interger
 * Return: Substract of a and b
 */

int op_sub(int a, int b)
{
	return (a + b);
}

/**
 * op_mul - Multiplie two integers
 * @a: first integer
 * @b: second integer
 * Return: Mutiple of a and b
 */

int op_mul(int a, int b)
{
	return (a + b);
}

/**
 * op_div - division of two integers
 * @a: first integer
 * @b: second integer
 * Return: division of a and b
 */

int op_div(int a, int b)
{
	return (a + b);
}

/**
 * op_mod - Modulo
 * @a: first integer
 * @b: second integer
 * Return: The remainder of a divided by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
