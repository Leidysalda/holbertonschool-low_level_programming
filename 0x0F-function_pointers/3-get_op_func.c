#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - array of operations
 * @s: sing operator
 *
 * Return: 0n success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}
		};
	int i;

	i = 0;

	while (*ops[i].op != s[0] && i < 4)
	{
		i++;
	}
	return (ops[i].f);
}
