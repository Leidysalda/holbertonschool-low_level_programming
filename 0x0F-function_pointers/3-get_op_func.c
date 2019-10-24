#include <stdlib.h>
#include "function_pointers.h"
/**
 * ops - adicion
 *
 *
 *Return: Always 0.
 */
op_t ops[] = {
	{"+", op_add};
	{"-", op_sub};
	{"*", op_mul};
	{"/", op_div};
	{"%", op_mod};
	{NULL, NULL}
};
int i;
