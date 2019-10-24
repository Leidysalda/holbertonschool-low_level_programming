#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - addition of two integers
 * @a: integer
 * @b: integer
 *
 * Return: 0n success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction of two integers
 * @a: integer
 * @b: integer
 *
 * Return: 0n success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplication of two integers
 * @a: integer
 * @b: integer
 *
 * Return: 0n success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two integers
 * @a: integer
 * @b: integer
 *
 * Return: 0n success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int op_div(int a, int b)
{
	if (a != 0 && b != 0)
	{
		return (a / b);
	}
	else
	{
		printf("Error\n");
		exit(100);
	}
}

/**
 * op_mod - module of two integers
 * @a: integer
 * @b: integer
 *
 * Return: 0n success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int op_mod(int a, int b)
{
	if (a != 0 && b != 0)
	{
		return (a % b);
	}
	else
	{
		printf("Error\n");
		exit(100);
	}
}
