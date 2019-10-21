#include "holberton.h"

/**
 * add - add two numbers
 * @num1 : firts number
 * @num2 : two number
 * Return: 0n success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int add(int num1, int num2)
{
	int add;

	add = num1 + num2;
	return (add);
}
